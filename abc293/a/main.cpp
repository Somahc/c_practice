#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    string str, ans = "";
    cin >> str;

    for(int i=0; i<(str.size()/2); i++){
        ans+=str[2 * i + 1];
        ans+=str[2 * i];
    }

    cout << ans << endl; 
}
