#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); i++)

int main(){
    int n,k=1,v=1;
    cin >> n;
    vector<int> a(n+1);
    vector<int> id(n+1);

    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    while(id[v] == 0){
        id[v] = k, k++;
        v = a[v];
    }
    int len = k- id[v];
    vector<int> ans;
    rep(i,len){
        ans.push_back(a[v]);
        v = a[v];
    }
    cout << ans.size() << endl;
    for(auto x : ans)cout << x << ' ';
    cout << endl;
    return 0;
}