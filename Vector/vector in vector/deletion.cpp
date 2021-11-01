Elements can be removed from a vector of vectors using the pop_back() function of C++ STL.

Below example demonstrates the removal operation in a vector of vectors. The code removes elements from a 2D vector by using the pop_back() function and then displays the matrix.
Syntax:

vector_name[row_position].pop_back()
Example 1: Let the vector of vectors be vector v = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } }

v[2].pop_back()
This function removes element 9 from the last row vector. Therefore v becomes { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8 } }.



Example 2:

v[1].pop_back()
This function removes element 6 from the last second row vector. Therefore v becomes { { 1, 2, 3 }, { 4, 5 }, { 7, 8 } }.

Below is the example to demonstrate removal from a vector of vectors.

// C++ program to demonstrate removal
// from a vector of vectors

#include <iostream>
#include <vector>
using namespace std;

// Driver Method
int main()
{
	// Initializing 2D vector "vect" with
	// sample values
	vector<vector<int> > vec{ { 1, 2, 3 },
							{ 4, 5, 6 },
							{ 7, 8, 9 } };

	// Removing elements from the
	// last row of the vector
	vec[2].pop_back();
	vec[1].pop_back();

	// Displaying the 2D vector
	for (int i = 0; i < 3; i++) {
		for (
			auto it = vec[i].begin();
			it != vec[i].end(); it++)
			cout << *it << " ";
		cout << endl;
	}
	return 0;
}

