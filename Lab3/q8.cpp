#include <iostream>
using namespace std;

void acceptElements(int *arr, int n) {
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int calculateSum(int *arr, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}

int findSmallest(int *arr, int n) {
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    return smallest;
}

int findLargest(int *arr, int n) {
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    return largest;
}

void displayResults(int sum, int smallest, int largest) {
    cout << "\n===== RESULTS =====" << endl;
    cout << "Sum = " << sum << endl;
    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n];

    acceptElements(arr, n);

    int sum = calculateSum(arr, n);
    int smallest = findSmallest(arr, n);
    int largest = findLargest(arr, n);

    displayResults(sum, smallest, largest);

    delete[] arr;

    return 0;
}