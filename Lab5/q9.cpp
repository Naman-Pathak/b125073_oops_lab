#include <iostream>
using namespace std;
void inspect(int x) {
    cout << "Value of integer variable = " << x << endl;
}
void inspect(int *ptr) {
    cout << "Value stored at pointer = " << *ptr << endl;
}
void inspect(int *arr, int size) {
    cout << "Array elements = ";
    for (int i = 0; i < size; i++)
        cout << *(arr + i) << " ";
    cout << endl;
}

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    inspect(x);
    int *ptr = &x;
    inspect(ptr);
    int n;
    cout << "\nEnter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    inspect(arr, n);
    return 0;
}