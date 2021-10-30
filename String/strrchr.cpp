In C++, strrchr() is a predefined function used for string handling. cstring is the header file required for string functions.
This function returns a pointer to the last occurrence of a character in a string. 
The character whose last occurrence we want to find is passed as the second argument to the function and the string in which we have to find the character is passed as the first argument to the function.  

Syntax 
 
        char *strrchr(const char *str, int c)

Here, str is the string and c is the character to be located. It is passed as its int promotion, but it is internally converted back to char. 

Application 
Given a string in C++, we need to find the last occurrence of a character, let’s say ‘a’.
Examples: Input : string = 'This is a string'
Output :9

Input :string = 'My name is Ayush'
Output :12
Algorithm 
1. Pass the given string in the strchr() function and mention the character you need to point to. 
2. The function returns a value, print the value.
 
 // C++ program to demonstrate working strchr()
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
char str[] = "This is a string";
char * ch = strrchr(str,'a');
cout << ch - str + 1;
return 0;
}

