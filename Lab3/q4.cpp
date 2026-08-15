#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int searchValue;
    cout << "Enter element to search: ";
    cin >> searchValue;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            cout << "Element found at position " << i + 1 << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Element is not present in the array." << endl;

    delete[] arr;

    return 0;
}