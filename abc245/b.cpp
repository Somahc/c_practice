#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    set<int> st;
    rep(i,n){
        int tmp;
        cin >> tmp;
        st.insert(tmp);
    }
    rep(i,2001){
        if(!st.count(i)){
            cout << i << endl;
            return 0;
        }
    }
}