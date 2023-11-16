#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    set<int> st;
    rep(i,n) {
        cin >> a[i];

        st.insert(a[i]);
    }

    rep(i,n){
        int y = a[i] - x;
        if(st.count(y)){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}