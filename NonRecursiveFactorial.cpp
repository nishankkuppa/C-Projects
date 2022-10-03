#include <cstdio>
/*
* A simple C++ program to calculate the factorial of a number without using recursion.
* 
* @author Nishank Kuppa
*/

int main()
{
	int n = 5;
	int multiplier = n;

	while (n > 1)
	{
		int temp = --n;
		multiplier *= temp;
	}
	printf("% d\n", multiplier);
}