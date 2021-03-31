#include <iostream>
#include <chrono>
#include <vector>

using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::duration;
using std::chrono::milliseconds;
using namespace std;

int Fibonacci(int n)
{
	if (n < 3)
		return 1;

	int Prev = 1;
	int PrevPrev = 1;

	for (int i = 3; i <= n; ++i)
	{
		int current = Prev + PrevPrev;
		PrevPrev = Prev;
		Prev = current;
	}

	return Prev;
}

int FibonacciRecursive(int n)
{
	// Base condition
	if (n < 3)
		return 1;
	int FibonacciN2 = FibonacciRecursive(n - 2);
	int FibonacciN1 = FibonacciRecursive(n - 1);
	return FibonacciN2 + FibonacciN1;
}

// Memoization

int FibonacciMemoize(int n, vector<int>& cache)
{
	// Check base condition
	if (n < 3)
		return 1;
	// Check whether the calculation result already exists in cache
	if (cache[n] > 0)
		return cache[n];

	// Do calculation recursively, and store the result in cache
	int FibonacciN2 = FibonacciMemoize(n - 2, cache);
	int FibonacciN1 = FibonacciMemoize(n - 1, cache);
	cache[n] = FibonacciN2 + FibonacciN1;
	return cache[n];
}

int main()
{
	int fibonacci5 = Fibonacci(5);
	cout << "Fibonacci(5) = " << fibonacci5 << endl;

	int fibonacci7 = Fibonacci(7);
	cout << "Fibonacci(7) = " << fibonacci7 << endl;

	int fibonacciRecursive5 = FibonacciRecursive(5);
	cout << "fibonacciRecursive5(5) = " << fibonacciRecursive5 << endl;

	vector<int> myVect = { 4, 2, 5, 6 };
	myVect.push_back(10);
	myVect.push_back(15);

	for (int i : myVect)
	{
		cout << i << endl;
	}

	int fibonacciN = 50;
	vector<int> cache;
	for (int i = 0; i <= fibonacciN; ++i)
		cache.push_back(0);

	for (int i = 40; i < 50; ++i)
	{
		auto t1_iterative = high_resolution_clock::now();
		cout << "Fibonacci(" << i << ") = " << Fibonacci(i) << endl;
		auto t2_iterative = high_resolution_clock::now();
		auto ms_iterative = duration_cast<milliseconds>(t2_iterative - t1_iterative);
		std::cout << ms_iterative.count() << "ms\n";

		auto t1_recursive = high_resolution_clock::now();
		cout << "fibonacciRecursive(" << i << ") = " << FibonacciRecursive(i) << endl;
		auto t2_recursive = high_resolution_clock::now();
		auto ms_recursive = duration_cast<milliseconds>(t2_recursive - t1_recursive);
		std::cout << ms_recursive.count() << "ms\n";

		auto t1_memoize = high_resolution_clock::now();
		cout << "FibonacciMemoize(" << i << ") = " << FibonacciMemoize(i, cache) << endl;
		auto t2_memoize = high_resolution_clock::now();
		auto ms_memoize = duration_cast<milliseconds>(t2_memoize - t1_memoize);
		std::cout << ms_memoize.count() << "ms\n";
	}
	return 0;
}
