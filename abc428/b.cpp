#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    int n, k;
    string s;
    int max_cnt = -1;
    cin >> n >> k >> s;

    map<string, int> mp;
    
    for(int i=0; i<n-k+1; i++) {
      mp[s.substr(i, k)]++;
      max_cnt = max(max_cnt, mp[s.substr(i, k)]);
      // cout << mp[s.substr(i, k)] << endl;
    }
    cout << max_cnt << "\n";

    for(auto x : mp) {
      if (max_cnt == x.second) {
        cout << x.first << " ";
      }
    }
    cout << endl;
    return 0;
}