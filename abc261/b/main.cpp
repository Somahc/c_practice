#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    rep(i,n) cin >> a[i];

    rep(i,n){
        rep(j,n){
            if (i == j) continue;
            if(a[i][j] == 'W'){
                if(a[j][i] == 'W'){
                    cout << "incorrect" << endl;
                    return 0;
                }
            }else if(a[i][j] == 'L'){
                if(a[j][i] == 'L'){
                    cout << "incorrect" << endl;
                    return 0;
                }
            }else if(!(a[i][j] == 'D' && a[j][i] == 'D')){
                cout << "incorrect" << endl;
                return 0;
            }
        }
    }
    cout << "correct" << endl;
    return 0;
}
