#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    set<string> st;
    rep(i,n){
        string s;
        cin >> s;
        if(st.find(s) == st.end()){
            cout << i + 1 << endl;
            st.insert(s);
        }
    }
}