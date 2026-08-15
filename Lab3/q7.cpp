#include <iostream>
#include <cctype>
#include <limits>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the character array (n): ";
    cin >> n;

    // Clear the input buffer completely before reading the string
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Dynamically allocate memory for a character array of size n
    char* str = new char[n+1];

    cout << "Enter a string: ";
    cin.getline(str, n+1);

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    // Traverse the array character by character using pointer arithmetic
    for (char* ptr = str; *ptr != '\0'; ptr++) {
        char ch = *ptr;

        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (isspace(ch)) {
            spaces++;
        }
    }

    // Output results
    cout << "\n--- Count Summary ---" << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;

    // Release dynamically allocated memory
    delete[] str;

    return 0;
}