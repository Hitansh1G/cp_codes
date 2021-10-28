sort(first_iterator, last_iterator) – To sort the given vector.
reverse(first_iterator, last_iterator) – To reverse a vector.
*max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
*min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements

// A C++ program to demonstrate working of sort(),
// reverse()
#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> //For accumulate operation
using namespace std;

int main()
{
	// Initializing vector with array values
	int arr[] = {10, 20, 5, 23 ,42 , 15};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> vect(arr, arr+n);

	cout << "Vector is: ";
	for (int i=0; i<n; i++)
		cout << vect[i] << " ";

	// Sorting the Vector in Ascending order
	sort(vect.begin(), vect.end());

	cout << "\nVector after sorting is: ";
	for (int i=0; i<n; i++)
	cout << vect[i] << " ";

	// Reversing the Vector
	reverse(vect.begin(), vect.end());

	cout << "\nVector after reversing is: ";
	for (int i=0; i<6; i++)
		cout << vect[i] << " ";

	cout << "\nMaximum element of vector is: ";
	cout << *max_element(vect.begin(), vect.end());

	cout << "\nMinimum element of vector is: ";
	cout << *min_element(vect.begin(), vect.end());

	// Starting the summation from 0
	cout << "\nThe summation of vector elements is: ";
	cout << accumulate(vect.begin(), vect.end(), 0);

	return 0;
}

