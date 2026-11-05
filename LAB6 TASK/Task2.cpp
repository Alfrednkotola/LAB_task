#include <iostream>
using namespace std;

int main() {

    int rows, cols;

    // Ask for rows - must not exceed 3
    cout << "Enter number of rows (max 3): ";
    cin >> rows;
    while (rows < 1 || rows > 3) {
        cout << "Rows must be between 1 and 3. Try again: ";
        cin >> rows;
    }

    // Ask for columns - must not exceed 3
    cout << "Enter number of columns (max 3): ";
    cin >> cols;
    while (cols < 1 || cols > 3) {
        cout << "Columns must be between 1 and 3. Try again: ";
        cin >> cols;
    }

    // Dynamically allocate 2D array
    double** array = new double*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new double[cols];
    }

    // Assign values using nested loops
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for row " << i << " column " << j << ": ";
            cin >> array[i][j];
        }
    }

    // Output values
    cout << "You entered:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Free the memory
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}