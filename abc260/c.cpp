#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;
using P = pair<int,int>;

int n, x, y;

ll calc(int level, bool is_red){
    if(level == 1) return is_red ? 0 : 1;
    if(is_red){
        return calc(level-1,true) + calc(level,false) * x;
    }else{
        return calc(level-1,true) + calc(level-1,false) * y;
    }
}

int main(){
    cin >> n >> x >> y;
    cout << calc(n,true) << endl;
}