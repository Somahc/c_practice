#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    // vector<pair<int,int>> ryu;
    deque<pair<int,int>> ryu;
    rep(i,n){
        ryu.push_back({i+1, 0});
    }
    rep(i,q){
        int query;
        cin >> query;
        if(query == 1){
            char sousa;
            cin >> sousa;
            if(sousa == 'U'){
                ryu.insert(ryu.begin(), {ryu[0].first,ryu[0].second+1});
            }else if(sousa == 'D'){
                ryu.insert(ryu.begin(), {ryu[0].first,ryu[0].second-1});
            }else if(sousa == 'L'){
                ryu.insert(ryu.begin(), {ryu[0].first-1,ryu[0].second});
            }else if(sousa == 'R'){
                ryu.insert(ryu.begin(), {ryu[0].first+1,ryu[0].second});
            }
            ryu.pop_back();
        }else{
            int sousa;
            cin >> sousa;
            sousa--;
            cout << ryu[sousa].first << " " << ryu[sousa].second << endl;
        }

    }
    // for(auto x : ryu) cout << x.first << " " << x.second << " ";
}