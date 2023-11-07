#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    rep(i,n){
        int a;
        cin >> a;
        if(a % 2 == 0) cout << a << ' ';
    }
    cout << endl;
}
