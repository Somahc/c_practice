#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;

    bitset<60> bs(n);
    string bs_s = bs.to_string();
    int count = 0;
    // cout << bs[0] << endl;
    for(int i = bs_s.size() - 1; i >= 0; i--){
        if(bs_s[i] == '1'){
            cout << count << endl;
            return 0;
        }
        count++;
    }
    // cout << count << endl;
    return 0;
}