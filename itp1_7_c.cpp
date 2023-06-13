#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int a[r][c];
    int row_sum = 0, col_sum[c] = {};

    for(int i=0; i<r; ++i) {
        row_sum = 0;
        for(int j=0; j<c; ++j) {
            cin >> a[i][j];
            row_sum += a[i][j];
            col_sum[j] += a[i][j];
            cout << a[i][j] << " ";
        }
        cout << row_sum << endl;
    }

    row_sum = 0;
    for(int j=0; j<c; ++j) {
        row_sum += col_sum[j];
        cout << col_sum[j] << " ";
    }
    cout << row_sum << endl;

    return 0;
}

// int main() {
//     int r, c;
//     cin >> r >> c;

//     int a[r+1][c+1] = {0};

//     for(int i=0; i<r; ++i) {
//         int sum = 0;
//         for(int j=0; j<c; ++j) {
//             int input;
//             cin >> input;
//             a[i][j] = input;
//             sum += input;
//         }

//         a[i][c+1] = sum;
//     }


//     for(int i=0; i<c+1; ++i) {
//         int sum = 0;
//         for(int j=0; j<r; ++j) {
//             sum += a[j][i];
//         }
//         a[r+1][i] = sum;
//     }

//     //出力
//     for(int i=0; i<r+1; ++i) {
//         for(int j=0; j<c+1; ++j) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }