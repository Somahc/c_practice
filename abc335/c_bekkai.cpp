#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<pair<int,int>> ryu;
    for(int i = n; i > 0; i--){
        ryu.push_back({i,0});
        // cout << i << endl;
    }

    rep(i,q){
        int query;
        cin >> query;
        if(query == 1){
            char sousa;
            cin >> sousa;
            if(sousa == 'U'){
                ryu.push_back({ryu.back().first,ryu.back().second+1});
            }else if(sousa == 'D'){
                ryu.push_back({ryu.back().first,ryu.back().second-1});
            }else if(sousa == 'L'){
                ryu.push_back({ryu.back().first-1,ryu.back().second});
            }else if(sousa == 'R'){
                ryu.push_back({ryu.back().first+1,ryu.back().second});
            }
        }else{
            int sousa;
            cin >> sousa;
            // sousa--;
            cout << ryu[ryu.size()-sousa].first << " " << ryu[ryu.size()-sousa].second << endl;
        }

    }
}