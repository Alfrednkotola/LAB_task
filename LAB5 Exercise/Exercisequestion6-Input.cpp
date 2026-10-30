#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

string Reverse(string s) {
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        rev += s[i];
    }
    return rev;
}

int main() {
    string fileData;
    ifstream myFile("data.txt");
    getline(myFile, fileData); // read whole line
    myFile.close();

    cout << "File content: " << fileData << endl;

    // iii. Count vowels
    int vowels = 0;
    for (char c : fileData) {
        char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            vowels++;
        }
    }
    cout << "Number of vowels: " << vowels << endl;

    // iv. Count words
    int words = 1;
    for (char c : fileData) {
        if (c == ' ') words++;
    }
    cout << "Number of words: " << words << endl;

    // v. Reverse
    cout << "Reversed: " << Reverse(fileData) << endl;

    // vi. Capitalize second letter of each word
    string result = fileData;
    bool newWord = true;
    for (int i = 0; i < result.length(); i++) {
        if (newWord && i + 1 < result.length()) {
            // second letter of word
            if (isalpha(result[i+1])) {
                result[i+1] = toupper(result[i+1]);
            }
            newWord = false;
        }
        if (result[i] == ' ') {
            newWord = true;
        }
    }
    cout << "Second letter capitalized: " << result << endl;

    return 0;
}