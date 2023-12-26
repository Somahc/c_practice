#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    n -= 97;
    string s = "abcdefghijklmnopqrstuvwxyz";
    cout << s[n] << endl;
    return 0;
}