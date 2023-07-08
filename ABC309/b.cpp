#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a, original;
    a.resize(n);
    original.resize(n);

    for(int i=0; i<n; i++) {
        a[i].resize(n);
        original[i].resize(n);
    }

    // for(int i=0; i<n; i++) {
        
    //     for(int j=0; j<n; j++) {
    //         int num;
    //         cin >> num;
    //         a[i][j] = num;
    //         original[i][j] = num;
    //     }
    // }

    for(int i=0; i<n; i++) {
        string nums;
        cin >> nums;
        for(int j=0; j<n; j++) {
            a[i][j] = nums[j] - '0';
            original[i][j] = nums[j] - '0';
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == 0 && j == 0) {
                a[i][j] = original[i+1][j];
            }else if(i == 0) {
                a[i][j] = original[i][j-1];
            }else if(i != n-1 && j == 0) {
                a[i][j] = original[i+1][j];
            }else if(i != n-1 && j-1 == n-1) {
                a[i][j] = original[i-1][j];
            }else if(i == n-1 && j != n-1) {
                a[i][j] = original[i][j+1];
            }else if(j == n-1) {
                a[i][j] = original[i-1][j];
            }
        }
    }

    for(int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if(j != n-1) cout << a[i][j];
            else cout << a[i][j];
        }
        cout << endl;
    }
}