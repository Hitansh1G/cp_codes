Input Functions
1. getline() :- This function is used to store a stream of characters as entered by the user in the object memory.
2. push_back() :- This function is used to input a character at the end of the string.
3. pop_back() :- Introduced from C++11(for strings), this function is used to delete the last character from the string.
 

// C++ code to demonstrate the working of
// getline(), push_back() and pop_back()
#include<iostream>
#include<string> // for string class
using namespace std;
int main()
{
	// Declaring string
	string str;

	// Taking string input using getline()
	// "geeksforgeek" in giving output
	getline(cin,str);

	// Displaying string
	cout << "The initial string is : ";
	cout << str << endl;

	// Using push_back() to insert a character
	// at end
	// pushes 's' in this case
	str.push_back('s');

	// Displaying string
	cout << "The string after push_back operation is : ";
	cout << str << endl;

	// Using pop_back() to delete a character
	// from end
	// pops 's' in this case
	str.pop_back();

	// Displaying string
	cout << "The string after pop_back operation is : ";
	cout << str << endl;

	return 0;

}

