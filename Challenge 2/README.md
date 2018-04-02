# Challenge 2

In this challenge we will be compare how fast the program can concatenate strings to form a larger string. An integer N will be provided as the
input. The order of N will be very large (10^8 usually) and the resulting string produced will be huge, so printing the string is not recommended
and thus not considered as a part of the challenge.


## Results
![Figure 1](https://github.com/DarkStar1997/Python-v-Cpp/blob/master/Challenge%202/Results1.png)
## Conclusion

As evident from the results, we can see that when it comes to string concatenation, the stringstream class is much more efficient
than the string class in C++. This is an important point to be kept in mind while handling with strings in C++. To get the
concatenated string we need to call str() method.
As for Python instead of going for direct string concatenation, it's quite
efficient to use the array module and store the integers in an array while converting the entire array to a string using the tostring() function. This is
even more efficient than the raw concatenation with string class in C++.
