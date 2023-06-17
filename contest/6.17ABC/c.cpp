#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[3*n];
    int search[2][n] = {{0}};

    for (int i=0; i<3*n; i++) {
        cin >> a[i];
    }

    for (int i=0; i<n; i++) {
        int kaisu = 0;
        for (int j=0; j<3*n; j++) {
            if (a[j] == (i+1)) {
                kaisu += 1;
                if (kaisu == 2) {
                    search[0][i] = i;
                    search[1][i] = (j+1);
                }
            }
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (search[1][j] > search[1][j + 1]) {
                // 1行目と2行目の要素を交換する
                swap(search[0][j], search[0][j + 1]);
                swap(search[1][j], search[1][j + 1]);
            }
        }
    }

    for (int i=0; i<n; i++) {
        int output = 0;
        output = search[0][i] + 1;
        cout << output;
        if (i != (n-1)) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}