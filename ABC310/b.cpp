#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> p(n);
    vector<int> c(n);
    vector<int> f(m);

    for(int i=0; i<n; i++) {
        cin >> p[i] >> c[i];
        for(int j=0; j<c[i]; j++) {
            cin >> f[j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n - i; j++) {
            int commonNum = 0;
            if(p[i] >= p[j] && c[i] < c[j]) {
                for(int k=0; k<c[i]; k++) {
                    for(int l=0; l<c[j]; l++) {
                        if(f[k] == f[l]) commonNum++;
                    }
                }
                if(commonNum == c[i]) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;



}