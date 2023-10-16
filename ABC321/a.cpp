#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int x;
    cin >> x;

    string stX = to_string(x);

    rep(i,stX.size() - 1){
        if(stX[i] - '0' <= stX[i+1] - '0'){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
    // cout << stX[0] - '0' + 1 << endl;
}