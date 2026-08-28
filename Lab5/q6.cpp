#include <iostream>
using namespace std;
int information(char arr[]) {
    int length = 0;

    while (arr[length] != '\0')
        length++;

    return length;
}

int information(char arr[], char ch) {
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == ch)
            count++;
    }

    return count;
}

int information(char arr[], char ch, int k) {
    int count = 0;
    for (int i = 0; i < k && arr[i] != '\0'; i++) {
        if (arr[i] == ch)
            count++;
    }

    return count;
}

int main() {
    char str[100];
    char ch;
    int k;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Length = " << information(str) << endl;

    cout << "Enter character to count: ";
    cin >> ch;

    cout << "Total occurrences = "
         << information(str, ch) << endl;

    cout << "Enter k: ";
    cin >> k;

    cout << "Occurrences in first " << k << " positions = "
         << information(str, ch, k) << endl;

    return 0;
}