#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <unordered_set>
std::vector<std::string> split(const std::string &text, std::unordered_set<char> delimiters)
{
    std::vector<std::string> words;
    std::string tmp="";
    for(auto& i:text)
    {
        if(delimiters.find(i)!=delimiters.end())
        {
            //if(tmp!="")
                words.emplace_back(tmp);
            tmp="";
        }
        else
        {
            tmp+=i;
        }
    }
    if(tmp!="")
        words.emplace_back(tmp);
    return words;
}
std::vector<std::string> file_tokenize(const std::string &filename, std::unordered_set<char> delimiters, const size_t buf_size)
{
    FILE *in=fopen(filename.c_str(), "r");
    std::vector<char> buffer(buf_size);
    std::vector<std::string> sentences;
    std::string str_tmp="";
    size_t sent_size=0;
    bool ctrl=false;
    while(size_t x=std::fread(buffer.data(), 1, buf_size, in))
    {
        //std::cout<<"Currently read:\n";
        //std::cout<<std::string(buffer.begin(), buffer.begin()+x)<<"\n****\n";
        if(x==0)
            break;
        auto tmp=split(std::string(buffer.begin(), buffer.begin()+x), delimiters);
        //std::cout<<"tmp_size="<<tmp.size()<<"\n";
        if(ctrl)
        {
            //std::cout<<"ctrl=true\n";
            auto tmp_size=tmp.size();
            sentences[sent_size-1]+=tmp[0];
            for(size_t i=1; i<tmp_size; i++)
            {
                sentences.emplace_back(tmp[i]);
                sent_size++;
            }
        }
        else
        {
            //std::cout<<"ctrl=false\n";
            auto tmp_size=tmp.size();
            for(auto& i:tmp)
            {
                sentences.emplace_back(i);
                sent_size++;
            }
            str_tmp=tmp[tmp_size-1];
        }
        ctrl=(delimiters.find(buffer[x-1])==delimiters.end());
    }
    fclose(in);
    return sentences;
}
std::vector<std::string> file_tokenize(const std::string &filename, std::unordered_set<char> delimiters)
{
    FILE *in=fopen(filename.c_str(), "r");
    fseek(in, 0, SEEK_END);
    size_t size=ftell(in);
    std::vector<char> buffer(size);
    rewind(in);
    fread(buffer.data(), 1, size, in);
    fclose(in);
    std::vector<std::string> sentences=split(std::string(buffer.begin(), buffer.end()), delimiters);
    return sentences;
}