#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m);
    for(int i = 0; i < m; i++){
        int c;
        cin >> c;
        a[i].resize(c);
        for(auto& x : a[i]) {
            cin >> x;
        }
    }
    int ans = 0;
    for(int b = 0; b < (1 << m); b++){
        set<int> st;
        for(int j = 0; j < m; j++){
            if(1 & (b >> j)){
                for(auto& x : a[j]){
                    st.insert(x);
                }
            }
        }
        ans += (int)st.size() == n;
    }
    cout << ans << endl;
}
