#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(n<3){
        cout << -1 << endl;
        return 0;
    }else if(n==3){
        if(s[0] == 'A' && s[1] == 'B' && s[2] == 'C'){
            cout << 1 << endl;
            return 0;
        }else{
            cout << -1 << endl;
            return 0;
        }
    }
    
    rep(i,n-3){
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C'){
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}