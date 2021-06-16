#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> myVector{ 4, -3, 19, 3, 5 };

	// Simple sort algorithms like bubble sort, insertion sort: O(n^2)
	// Quick sort, merge sort: O(n log n)

	// STL: Standard Template Library

	sort(myVector.begin(), myVector.end());

	for (int i : myVector)
		cout << i << " ";
}