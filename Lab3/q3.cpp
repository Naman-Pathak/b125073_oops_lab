#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n];

    int even = 0, odd = 0;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Number of even elements = " << even << endl;
    cout << "Number of odd elements = " << odd << endl;

    delete[] arr;

    return 0;
}