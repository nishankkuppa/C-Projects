/*
* Experimenting with vectors in the C++ Standard Template Library
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    cout << "vector from initializer list: " << endl;
    vector<int> vectorInt = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    cout << "size of array: " << vectorInt.size() << endl;
    cout << "first element: " << vectorInt.front() << endl;
    cout << "last element: " << vectorInt.back() << endl;
    cout << endl;
    
    // iterator
    for (auto it = vectorInt.begin(); it < vectorInt.end(); ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;
    
    cout << "element at 5: " << vectorInt[5] << endl;
    cout << "element at 5: " << vectorInt.at(5) << endl;

    cout << "range-based for loop:" << endl;
    for (int i : vectorInt) 
    {
        cout << i << ' ';
    }
    cout << endl << endl;

    cout << "insert 400 at begin + 3: " << endl;
    vectorInt.insert(vectorInt.begin() + 3, 400);
    cout << "size: " << vectorInt.size() << endl;
    cout << "vectorInt[5]: " << vectorInt[5] << endl;
    
    cout << "erase at begin + 5: " << endl;
    vectorInt.erase(vectorInt.begin() + 5);
    cout << "size: " << vectorInt.size() << endl;
    cout << "vectorInt[5]: " << vectorInt[5] << endl;
    
    cout << "push_back 47: " << endl;
    vectorInt.push_back(47);
    cout << "size: " << vectorInt.size() << endl;
    cout << "vectorInt.back() " << vectorInt.back() << endl;
    cout << endl;

    // from C-array
    const static size_t size = 10;
    int ia[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << "vector from C-array: " << endl;
    vector<int> vi2(ia, ia + size);
    for( int i : vi2 ) 
    {
        cout << i << ' ';
    }
    cout << endl << endl;
    
    // vector of strings
    cout << "vector of strings:" << endl;
    vector<string> vs = { "one", "two", "three", "four", "five" };
    for(const string & v : vs) 
    {
        cout << v << endl;
    }
    
    return 0;
}
