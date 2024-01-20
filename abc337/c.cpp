#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    map<int, int> mp;
    int n;
    cin >> n;
    rep(i,n){
        int tmp;
        cin >> tmp;
        if(tmp == -1) mp[0] = i+1; 
        else mp[tmp] = i+1;
    }
    // string ans;
    queue<int> q;
    rep(i,n){
        if(i == 0){
            // ans += to_string(mp[0]);
            q.push(mp[0]);
            cout << to_string(mp[0]) << " "; 
        }
        else {
            // ans += to_string(mp[stoi(ans.substr(i-1, 1))]);
            
            cout << to_string(mp[q.back()]) << " ";
            q.push(mp[q.back()]);
        }
    }
    cout << endl;
    return 0;
}