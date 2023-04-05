#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

int main() {
    int r1, c1, r2, c2;
    int mat1[MAX][MAX], mat2[MAX][MAX], res[MAX][MAX];

    cout << "Enter the number of rows of first matrix: ";
    cin >> r1 ;
    cout << "Enter the columns of first matrix: ";
    cin>> c1;
    cout << "Enter the number of rows of second matrix: ";
    cin >> r2;
     cout << "Enter the columns of second matrix: ";
    cin >> c2;
    // check if multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }
    // input first matrix
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout<<"Enter Number at index ["<<i<<"]["<<j<<"] : ";
            cin >> mat1[i][j];
        }
    }
    // input second matrix
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cout<<"Enter Number at index ["<<i<<"]["<<j<<"] : ";
            cin >> mat2[i][j];
        }
    }
    // perform multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    // output result matrix
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << res[i][j]<< " ";
        }
        cout << endl;
    }
    return 0;
}

