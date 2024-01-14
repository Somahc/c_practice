#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    n--;
    vector<int> a;
    while(n){
        a.push_back(n%5);
        n /= 5;
    }
    if(a.empty()) a.push_back(0);
    // for(auto& x : a) cout << x;
    // cout << endl;
    reverse(a.begin(), a.end());
    // for(auto& x : a) cout << x;
    // cout << endl;
    for(auto& x : a) cout << x*2;
    cout << endl;
}