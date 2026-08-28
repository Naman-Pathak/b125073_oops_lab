#include <iostream>
using namespace std;
void update(int &x, int amount) {
    x += amount;
}
void update(float &x, float amount) {
    x += amount;
}
void update(int arr[], int size, int amount) {
    for (int i = 0; i < size; i++) arr[i] += amount;
}
int main() {
    int x, amount;
    float y, famount;
    cout << "Enter integer value: ";
    cin >> x;
    cout << "Enter amount to increase: ";
    cin >> amount;
    cout << "Before update: " << x << endl;
    update(x, amount);
    cout << "After update: " << x << endl;
    cout << "\nEnter floating-point value: ";
    cin >> y;
    cout << "Enter amount to increase: ";
    cin >> famount;
    cout << "Before update: " << y << endl;
    update(y, famount);
    cout << "After update: " << y << endl;
    int n;
    cout << "\nEnter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Before update: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\nEnter amount to increase: ";
    cin >> amount;
    update(arr, n, amount);
    cout << "After update: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}