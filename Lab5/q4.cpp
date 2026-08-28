#include <iostream>
using namespace std;
int process(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum;
}
float process(float arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum;
}
int process(int arr[], int size, int k) {
    int sum = 0;
    if (k > size) k = size;
    for (int i = 0; i < k; i++) sum += arr[i];
    return sum;
}
int main() {
    int n;

    cout << "Enter size of integer array: ";
    cin >> n;

    int arr[n];

    cout << "Enter integer elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Sum of integer array = "
         << process(arr, n) << endl;

    float farr[n];

    cout << "\nEnter floating-point elements: ";
    for (int i = 0; i < n; i++)
        cin >> farr[i];

    cout << "Sum of floating-point array = "
         << process(farr, n) << endl;

    int k;
    cout << "\nEnter k: ";
    cin >> k;
    cout << "Sum of first " << k << " elements = "
         << process(arr, n, k) << endl;

    return 0;
}