#include <iostream>
#include <string>
using namespace std;

int main() {
    int value = 7; // <-- EXAMPLE NUMBER, change to user input later
    bool valid = false;

    while(!valid) {
        cout << "Enter an integer value between 5 and 10" << endl;
        cin >> value;

        if(cin.fail()) {
            cin.clear();
            string wrong;
            cin >> wrong;
            cout << "Sorry, you entered an invalid number, please try again" << endl;
            continue;
        }

        if (value >= 5 && value <= 10) {
            valid = true;
        } else {
            // THE FIXED LINE - numbers 5 and 10 are here
            cout << "You entered " << value << ". Please enter a number between 5 and 10" << endl;
        }
    }

    cout << "Your input value (" << value << ") has been accepted." << endl;
    return 0;
}
