#include <iostream>
using namespace std;
int main() {
    int row, col, i, j;
    int m1[10][10], m2[10][10], sum[10][10];
    cout << "\n Enter the number of Rows and Columns of both matrices : ";
    cin >> row >> col;
    cout << "\n Enter the " << row * col << " elements of first matrix : \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> m1[i][j];
        }
    }
    cout << "\nEnter the " << row * col << " elements of second matrix : \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> m2[i][j];
        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    cout << "\n\nThe first matrix is : \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << m1[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "\n\nThe second matrix is : \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << m2[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "\n\nThe Sum matrix is : \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << sum[i][j] << "  ";
        }
     cout << endl;
    }
    return 0;
}
