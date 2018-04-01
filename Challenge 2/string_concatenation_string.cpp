#include <iostream>
#include <MyTimer.h>
#include <string>
int main()
{
	std::ios_base::sync_with_stdio(false);
	int n; std::cin>>n;
	std::string str;
	auto start=now();
	for(int i=1; i<=n; i++)
		str+=std::to_string(i);
	std::cout<<span(start, now())<<"\n";
	//std::cout<<str<<"\n";
}
