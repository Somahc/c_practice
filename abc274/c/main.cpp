#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> parent(2*n+2);
    vector<int> ans(2*n+2);

    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        parent[2*i] = parent[2*i+1] = a;
    }

    for(int i = 2; i <= 2*n+1; i++){
        ans[i] = ans[parent[i]] + 1;
    }

    for(int i = 1; i <= 2*n+1; i++){
        cout << ans[i] << ' ';
    }
}