#include <iostream>
using namespace std;


int Factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; ++i)
	{
		result *= i;
	}
	return result;
}

int FactorialRecursive(int n)
{
	if (n == 1)
		return 1;
	else
	{
		int nMinus1Fact = FactorialRecursive(n - 1);
		return nMinus1Fact * n;
	}
}

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


int main()
{
	int fact5 = Factorial(5);
	cout << "Factorial(5) = " << fact5 << endl;

	int fact5Recursive = FactorialRecursive(5);
	cout << "FactorialRecursive(5) = " << fact5Recursive << endl;

	int fibonacci5 = Fibonacci(5);
	cout << "Fibonacci(5) = " << fibonacci5 << endl;

	int fibonacci7 = Fibonacci(7);
	cout << "Fibonacci(7) = " << fibonacci7 << endl;

	return 0;
}
