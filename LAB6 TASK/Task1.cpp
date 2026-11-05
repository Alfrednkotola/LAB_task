#include <iostream>
#include <string>
using namespace std;

int main() {

    // Dynamically allocate an integer and a string
    int* pNumber = new int;
    string* pName = new string;

    // Ask user for values
    cout << "Enter an integer: ";
    cin >> *pNumber;

    cout << "Enter a string: ";
    cin >> *pName;

    // Output the values
    cout << "Value of integer: " << *pNumber << endl;
    cout << "Value of string: " << *pName << endl;

    // Free the memory
    delete pNumber;
    delete pName;

    return 0;
}