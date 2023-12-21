#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    int a[31][31];
    cin >> n;
    rep(i,n){
        rep(j,i+1){
            if(j == 0 or j == i){
                a[i][j] = 1;
                // cout << a[i][j] << " ";
            }else{
                a[i][j] = (a[i-1][j-1] + a[i-1][j]);
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}