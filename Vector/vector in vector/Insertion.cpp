Elements can be inserted into a vector using the push_back() function of C++ STL.

Below example demonstrates the insertion operation in a vector of vectors. The code creates a 2D vector by using the push_back() function and then displays the matrix.

Syntax:

vector_name.push_back(value)

where value refers to the element
      to be added in the back of the vector
Example 1:

v2 = {1, 2, 3}
v1.push_back(v2);
This function pushes vector v2 into vector of vectors v1. Therefore v1 becomes { {1, 2, 3} }.

Example 2:

v2 = {4, 5, 6}
v1.push_back(v2);
This function pushes vector v2 into existing vector of vectors v1 and v1 becomes v1 = { {1, 2, 3}, {4, 5, 6} }

// C++ program to demonstrate insertion
// into a vector of vectors

#include <iostream>
#include <vector>
using namespace std;

// Defining the rows and columns of
// vector of vectors
#define ROW 4
#define COL 5

int main()
{
	// Initializing the vector of vectors
	vector<vector<int> > vec;

	// Elements to insert in column
	int num = 10;

	// Inserting elements into vector
	for (int i = 0; i < ROW; i++) {
		// Vector to store column elements
		vector<int> v1;

		for (int j = 0; j < COL; j++) {
			v1.push_back(num);
			num += 5;
		}

		// Pushing back above 1D vector
		// to create the 2D vector
		vec.push_back(v1);
	}

	// Displaying the 2D vector
	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j < vec[i].size(); j++)
			cout << vec[i][j] << " ";
		cout << endl;
	}
	return 0;
}

