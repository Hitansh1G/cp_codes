Syntax:

for(auto &itr : vector_name)


Explanation: Here itr is an address to the value stored in vector which is used to traverse vectors. Below is the program to illustrate the same:

// C++ program to illustrate the updation
// in vector without using iterator
#include <bits/stdc++.h>
using namespace std;

// Function to update the value in vector
void updateVector(vector<int> arr)
{

	cout << "Vector Before Update: ";
	for (auto& it : arr) {
		cout << it << ' ';
	}

	// Traverse using the reference to value
	// and multiply each value by 2
	for (auto& it : arr) {
		it *= 2;
	}

	cout << "\nVector After Update: ";
	// Print vector elements
	for (auto& it : arr) {
		cout << it << ' ';
	}
}

// Driver Code
int main()
{

	// Declare the vector
	vector<int> arr = { 1, 2, 3, 4 };

	// Function Call
	updateVector(arr);
	return 0;
}

Output:
Vector Before Update: 1 2 3 4 
Vector After Update: 2 4 6 8

Advantages:

Simple and easy to write code.
Better and efficient than using iterators method.

Disadvantages:

It iterates only in forward direction.
Keeps no counter i.e., We cannot find the index of any element with this traversal. For counting the element, the counter have to taken explicitly.