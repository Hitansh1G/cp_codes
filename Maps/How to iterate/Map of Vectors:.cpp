// C++ program to illustrate the iteration
// in Map of vectors without using iterator
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{

	// Declare the map of vectors
	map<int, vector<int> > Mp;

	// Temporary vector
	vector<int> temp = { 1, 2, 3 };

	// Inserting values in Map
	Mp[1] = temp;

	temp = { 2, 3, 8, 9 };
	Mp[2] = temp;

	temp = { 10, -2 };
	Mp[3] = temp;

	// Iterate using value in Map of vectors
	for (auto it : Mp) {

		// Print the elements
		cout << it.first << " -> ";

		// Traverse each vector map
		// with it.first and print the
		// elements
		for (auto jt : it.second) {
			cout << jt << ' ';
		}

		cout << endl;
	}

	return 0;
}

Output:
1 -> 1 2 3 
2 -> 2 3 8 9 
3 -> 10 -2