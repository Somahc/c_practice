#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s2 = regex_replace(s, regex("na"), "nya");
    cout << s2 << endl;
}