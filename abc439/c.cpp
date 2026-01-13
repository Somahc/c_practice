#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    vector<int> ansVec;
    
    vector<int> c(n+1);
    for(int x=1; x * x <= n; x++){
      for(int y=x+1; x * x + y * y <=n; y++){
        c[x * x + y * y]++;
      }
    }

    for(int i=1; i<=n; i++){
      if(c[i] == 1){
        ans++;
        ansVec.push_back(i);
      }
    }

    cout << ans << endl;
    for(auto x : ansVec){
      cout << x << " ";
    }
    cout << endl;
    
    return 0;
}