#include <iostream>
#include <cctype>
using namespace std;
void check(int n) {
    if (n > 0)
        cout << n << " is Positive\n";
    else if (n < 0)
        cout << n << " is Negative\n";
    else
        cout << "The number is Zero\n";
}
void check(char ch) {
    if (isupper(ch))
        cout << ch << " is an Uppercase letter\n";
    else if (islower(ch))
        cout << ch << " is a Lowercase letter\n";
    else
        cout << ch << " is not an alphabetic letter\n";
}
void check(char arr[], int size, char target) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Character '" << target
                 << "' found at index " << i << "\n";
            found = true;
        }
    }
    if (!found)
        cout << "Character '" << target << "' not found\n";
}
int main() {
    int n;
    char ch;
    cout << "Enter an integer: ";
    cin >> n;
    check(n);
    cout << "Enter a character: ";
    cin >> ch;
    check(ch);
    int size;
    cout << "Enter size of character array: ";
    cin >> size;
    char arr[size];
    cout << "Enter characters: ";
    for (int i = 0; i < size; i++) cin >> arr[i];
    char target;
    cout << "Enter character to search: ";
    cin >> target;
    check(arr, size, target);
    return 0;
}