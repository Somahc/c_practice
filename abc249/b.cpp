#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

bool isOomoji = false;
bool isKomoji = false;
set<char> st;
int main(){
    string s;
    cin >> s;
    rep(i,s.size()){
        if(isupper(s[i])) isOomoji = true;
        if(!isupper(s[i])) isKomoji = true;
        st.insert(s[i]);
    }
    if(isOomoji and isKomoji and (st.size() == s.size())){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}