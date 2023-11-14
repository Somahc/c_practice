#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    set<int> st;
    rep(i,n){
        int a;
        cin >> a;
        st.insert(a);
    }
    for(int i=0; i<k; i++){
        if(st.find(i) == st.end()){ // iがstにない
            cout << i << endl;
            return 0;
        }
    }
    cout << k  << endl;
    // cout << "agkjlner" << endl;
    return 0;

}
