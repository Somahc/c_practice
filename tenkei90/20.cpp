#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main(){
    long long int a,b,c,tmp = 1;
    cin >> a >> b >> c;

    for(int i=0; i<b; ++i){
        tmp = tmp*c;
    }

    if(a < tmp) cout << "Yes" << endl;
    else cout << "No" << endl;
}