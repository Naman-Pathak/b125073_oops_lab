#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    // Allocate first matrix
    int **A = new int*[m];

    for (int i = 0; i < m; i++) {
        A[i] = new int[n];
    }

    // Allocate second matrix
    int **B = new int*[m];

    for (int i = 0; i < m; i++) {
        B[i] = new int[n];
    }

    // Allocate result matrix
    int **C = new int*[m];

    for (int i = 0; i < m; i++) {
        C[i] = new int[n];
    }

    cout << "\nEnter elements of Matrix A:" << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "\nEnter elements of Matrix B:" << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\nResult of Matrix Addition:" << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }

    // Deallocate row pointers
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}