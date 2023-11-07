#include<bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    // cout << t.substr(m-n) << endl;

    if(t.substr(0,n) == s && t.substr(m-n) != s){
        cout << '1' << endl;
        return 0;
    }else if(t.substr(0,n) != s && t.substr(m-n) == s){
        cout << '2' << endl;
        return 0;
    }else if(t.substr(0,n) != s && t.substr(m-n) != s){
        cout << '3' << endl;
        return 0;
    }else{
        cout << "0" << endl;
        return 0;
    }
}