#include <iostream>
using namespace std;

// Average of two integers
double evaluate(int a, int b) {
    return (a + b) / 2.0;
}

// Average of three integers
double evaluate(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

// Average of two floating-point values
double evaluate(float a, float b) {
    return (a + b) / 2.0;
}

// Average of integer array
double evaluate(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return (double)sum / size;
}

// Average of two integers accessed through pointers
double evaluate(int *a, int *b) {
    return (*a + *b) / 2.0;
}
int main() {
    int a, b, c;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Average of two integers = "
         << evaluate(a, b) << endl;

    cout << "\nEnter three integers: ";
    cin >> a >> b >> c;

    cout << "Average of three integers = "
         << evaluate(a, b, c) << endl;

    float x, y;

    cout << "\nEnter two floating-point values: ";
    cin >> x >> y;

    cout << "Average of two floating-point values = "
         << evaluate(x, y) << endl;

    int n;

    cout << "\nEnter size of integer array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Average of array elements = "
         << evaluate(arr, n) << endl;
    int p, q;
    cout << "\nEnter two integers for pointer evaluation: ";
    cin >> p >> q;
    cout << "Average using pointers = " << evaluate(&p, &q) << endl;

    return 0;
}