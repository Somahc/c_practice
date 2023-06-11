#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int a[n][m];
    int v[m];
    int c[n] = {0};

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            int b;
            cin >> b;
            a[i][j] = b;
        }
    }

    for(int i=0; i<m; i++) {
        int b;
        cin >> b;
        v[i] = b;
    }

    for(int i=0; i<n; i++) {
        int sum = 0;
        for(int j=0; j<m; j++) {
            sum += a[i][j] * v[j];
        }
        c[i] = sum;
    }

    for(int i=0; i<n; i++) {
        cout << c[i] << endl;
    }

}