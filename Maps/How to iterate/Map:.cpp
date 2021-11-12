// C++ program to illustrate the iteration
// in Map without using iterator
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{

	// Declare the map
	map<int, int> Mp;

	// Inserting values in Map
	Mp[1] = 1;
	Mp[2] = 2;
	Mp[3] = 3;

	// Iterate using value in Map
	for (auto it : Mp) {

		// Print the elements
		cout << it.first << ' '
			<< it.second << endl;
	}

	return 0;
}

Output:
1 1
2 2
3 3