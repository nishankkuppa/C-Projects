/*
* This program takes input from a user, enters it into a new text document,
* reads the text document, and then deletes it.
* 
* @author Nishank Kuppa
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Take input from user.
	cout << "Enter your input below:\n" << endl;
	char tempBuffer[128];
	cin.getline(tempBuffer, sizeof(tempBuffer));
	cout << "This is what you wrote: " << tempBuffer << endl;

	// Enter the user's input into a text document.
	static const char* filename = "test.txt";
	cout << "Writing your message to test.txt" << endl;
	ofstream ofile(filename);
	ofile << tempBuffer << endl;
	ofile.close();

    // Read the text document
    static char secondBuffer[128];
    cout << "Below is what was written to text.txt: " << endl;
    ifstream infile(filename);
    infile.getline(secondBuffer, sizeof(secondBuffer));
    cout << secondBuffer << endl;
    infile.close();

    // Delete the text document.
	cout << "Deleting the file now." << endl;
    remove(filename);
    
	
	return 0;
}