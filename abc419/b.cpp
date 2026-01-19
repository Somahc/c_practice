#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    int q;
    vector<int> v;
    cin >> q;
    for(int i=0; i<q; i++){
      int query;
      cin >> query;
      if(query == 1){
        int x;
        cin >> x;
        v.push_back(x);
      }else{
        sort(v.begin(), v.end());
        // cout << "2きたよ" << "\n";
        cout << v.front() << endl;
        v.erase(v.begin());
      }
    }
    return 0;
}