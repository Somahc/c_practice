#include<bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    rep(i,n-1){
        if((s[i] == 'a' && s[i+1] == 'b') || (s[i] == 'b' && s[i+1] == 'a')) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}