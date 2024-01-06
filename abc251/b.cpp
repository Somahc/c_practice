#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,w;
    cin >> n >> w;
    vector<int> a(n);
    for(auto& x : a) cin >> x;
    vector<bool> flag(w+1);

    for(int i = 0; i < n; i++){
        int s = a[i];
        if(s <= w) flag[s] = 1;
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            int s = a[i] + a[j];
            if(s <= w) flag[s] = 1;
        }
    }
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                int s = a[i] + a[j] + a[k];
                if(s <= w) flag[s] = 1;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < w+1; i++){
        if(flag[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}