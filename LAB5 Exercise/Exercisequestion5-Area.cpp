#include <iostream>
using namespace std;

float calculateSquare(float s) {
    return s * s;
}
float calculateRectangle(float l, float w) {
    return l * w;
}
float calculateTriangle(float b, float h) {
    return 0.5 * b * h;
}

int main() {
    int choice;
    while(true) {
        cout << "Please select the area of the shape to calculate" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit program" << endl;
        cout << "Enter selection: ";
        cin >> choice;

        if(choice == 1) {
            float side;
            cout << "Enter side: ";
            cin >> side;
            cout << "Area: " << calculateSquare(side) << endl;
        } else if(choice == 2) {
            float length, width;
            cout << "Enter length and width: ";
            cin >> length >> width;
            cout << "Area: " << calculateRectangle(length, width) << endl;
        } else if(choice == 3) {
            float base, height;
            cout << "Enter base and height: ";
            cin >> base >> height;
            cout << "Area: " << calculateTriangle(base, height) << endl;
        } else if(choice == 4) {
            break;
        } else {
            cout << "Your input was: " << choice << " which is an invalid input" << endl;
        }
    }
    return 0;
}