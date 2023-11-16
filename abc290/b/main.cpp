#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, k, kessho = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    rep(i,n){
        if(s[i] == 'o' && kessho < k) {
            cout << 'o';
            kessho++;
        }
        else cout << 'x';
    }
    cout << endl;
}
