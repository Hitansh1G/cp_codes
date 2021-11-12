Syntax:

for(auto itr : vector_name)

Explanation: Here itr is the value stored in vector which is used to traverse vectors. Below is the program to illustrate the same:

// C++ program to illustrate the above
// topic
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{

	// Declare the vector
	vector<int> arr = { 1, 2, 3, 4 };

	// Traversing the vector using
	// values directly
	for (auto& it : arr) {

		// Print the values
		cout << it << ' ';
	}
	return 0;
}

Output:
1 2 3 4