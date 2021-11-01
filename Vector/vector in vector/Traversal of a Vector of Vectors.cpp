The vector of vectors can be traversed using the iterators in C++. The following code demonstrates the traversal of a 2D vector.

Syntax:

        for i in [0, n)
        {
            for (iterator it = v[i].begin() ; it != v[i].end() ;  it++) 
        {
                // Operations to be done
                // For example to print
                print(*it)
            }
        }
Below is the example to demonstrate traversal in a vector of vectors.

// C++ code to demonstrate traversal
// of a 2D vector

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

	// Displaying the 2D vector
	for (int i = 0; i < 3; i++) {
		for (
			auto it = vec[i].begin() ; it != vec[i].end(); it++)
			cout << *it << " ";
		cout << endl;
	}

	return 0;
}
//auto data type means ki it can take any data type that is required 


