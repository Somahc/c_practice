#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using P = pair<int,int>;

int main(){
    int n,q,k;
    cin >> n >> k >> q;
    vector<int> a(k);
    vector<int> l(q);
    rep(i,k){
        int tmp;
        cin >> tmp;
        tmp--;
        // cout << tmp << endl;
        a[i] = tmp;
    }
    // for(auto x : a){
    //     cout << x+1 << " ";
    // }
    // cout << endl;

    rep(i,q){
        int tmp;
        cin >> tmp;
        tmp--;
        l[i] = tmp;
    }

    rep(i,q){
        sort(a.begin(),a.end());
        // cout << i << "じゅんめ" << endl;
        // for(auto x : a){
        // cout << x+1 << " ";
        // }
        // cout << endl;

        if(a[l[i]] == n-1) continue;
        if(a[l[i]+1] != a[l[i]]+1){
            // a[l[q]+1] = true;
            // a[l[q]] = false;
            a[l[i]]++;
            // a.push_back(l[q]+1);
            // remove(a.begin(), a.end(), l[q]);
        }else{
            continue;
        }
    }

    for(auto x : a){
        cout << x+1 << " ";
    }
    cout << endl;

    return 0;
}