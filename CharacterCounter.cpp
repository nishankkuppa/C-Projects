/*
* A C++ program that counts the number of characters in the string.
* Demonstrate the use of strings, loops, and various data types. 
* 
* @author Nishank Kuppa
*/

#include <cstdio>

const char string[] = "This is a null-terminated string.";

int main()
{
    int count = 0;

    for (int x : string)
    {
        if (x == 0) break;
        ++count;
    }
    

    printf("The number of characters is: %d\n", count);
    return 0;
}
