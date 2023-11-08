#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;

    vector<int> a(n+1);
    vector<bool> b(n+1, false);

    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) if(!b[i]) b[a[i]] = true;

    for(int i = 1; i <= n; i++){
        if(b[i] == false) cnt++;
    }
    cout << cnt << endl;

    for(int i = 1; i <= n; i++){
        if(b[i] == false) cout << i << " ";
    }
    cout << endl;


        // vector<pair<int, bool>> arr(n+1);

        // for(int i=1; i<=n; i++){
        //     arr[i] = make_pair(i, false);
        // }

        // for(int i=1; i<=n; i++){
        //     int a;
        //     cin >> a;
        //     if(arr[i].second == false) {
        //         cnt++;
        //         arr[a].second = true;
        //     }
        // }

        // cout << cnt << endl;
        // for(auto x : arr){
        //     if(x.second == false && x.first != 0) cout << x.first << " ";
        // }
        // cout << endl;



    }
