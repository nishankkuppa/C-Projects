#include <cstdio>
using namespace std;

/*
* A program to demonstrate the use of structured data, 
* various data types, data handling, qualifiers, pointers,
* and object oriented programming in C++.
* 
* @author Nishank Kuppa
*/

struct LibraryCard {
	const char* title;
	const char* author;
	const char* publisher;
	const char* subject;
	int isbn;
	const char* worldcat;
	float dewey;
	int yearPublished;
	int yearAcquired;
	int qtyInStock;
};


int main()
{
	LibraryCard myDictionary = {
		"Merriam-Webster Dictionary",
		"George and Charles Merriam",
		"Encyclopedia Britannica, Inc.",
		"Education",
		9780847945634,
		"83475983483",
		39838.288,
		1995,
		2020,
		29921,

	};

	printf("Title: %s\n", myDictionary.title);
	printf("Author: %s\n", myDictionary.author);
	printf("Publisher: %s\n", myDictionary.publisher);
	printf("Subject: %s\n", myDictionary.subject);
	printf("ISBN: %d\n", myDictionary.isbn);
	printf("WorldCat (OCLC): %s\n", myDictionary.worldcat);
	printf("Dewey Decimal: %f\n", myDictionary.dewey);
	printf("Year published: %d\n", myDictionary.yearPublished);
	printf("Year acquired: %d\n", myDictionary.yearAcquired);
	printf("Quantity: %d\n", myDictionary.qtyInStock);

	return 0;
}
