#include <cstdio>
#include <typeinfo>

/*
* A simple program that prints prime numbers up to 200.
* Demonstrate the use of nested loops and order of operations in C++.
* 
* @author Nishank Kuppa
*/
int main()
{
	bool checker = false;

	for (int prime = 2; prime < 200; ++prime)
	{
		checker = true;
		for (int tester = 2; tester < prime; ++tester)
		{
			if (prime % tester == 0)
			{
				checker = false;
				break;
			}
		}

		if (checker == true)
		{
			printf("%d\n", prime);
		}
	}
}