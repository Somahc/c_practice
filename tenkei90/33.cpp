#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)
const int INF = (int)1e9;
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

int main(){
    int h,w;
    cin >> h >> w;
    if(h == 1 || w == 1) (h >= w) ? cout << h << endl : cout << w << endl;
    else cout << ((h+1)/2) * ((w+1)/2) << endl;
    return 0;
}