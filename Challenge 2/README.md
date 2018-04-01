# Challenge 2

In this challenge we will be comparing the string concatenation test of C++ and Python. The user will input an integer N and the
program will concatenate all the numbers from 1 to N into a single string.

## Results

![Figure 1](https://github.com/DarkStar1997/Python-v-Cpp/blob/master/Challenge%202/Results1.png)

## Lessons Learnt

As evident from the results, we can see that when it comes to string concatenation, the stringstream class is much more efficient
than the string class in C++. This is an important point to be kept in mind while handling with strings in C++. To get the
concatenated string we need to call str() method. As for Python instead of going for direct string concatenation, it's quite
efficient to store the integers in an array and converting the entire array to a string using the tostring() function. This is
even more efficient than the raw concatenation with string class in C++.
