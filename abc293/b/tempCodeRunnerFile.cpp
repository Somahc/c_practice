#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    // vector<int> arr(n);
    vector<pair<int, bool>> arr(n+1);

    for(int i=1; i<=n; i++){
        arr[i] = make_pair(i, false);
        // if(arr[a].second == false) arr[a].second = true;
        // else arr[i] = make_pair(a, false);
    }

    for(int i=1; i<=n; i++){
        int a;
        cin >> a;
        if(arr[i].second == false && arr[a].second == false) {
            cnt++;
            arr[a].second = true;
        }
    }

    cout << cnt << endl;
    for(auto x : arr){
        if(x.second == false && x.first != 0) cout << x.first << " ";
    }
    cout << endl;



}
