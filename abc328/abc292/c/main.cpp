#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

long long f(int x){
    long long res = 0;
    for(int i=1; i*i<=x; i++){ // i,jのうち小さい方はsqrt(x)以下, でないとi*jがxを超えるから
        if(x%i != 0) continue;
        int j = x/i;
        if(i == j) res++;
        else res += 2;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    long long ans = 0;
    for(int x = 1; x < n; x++){
        ans +=f(x)*f(n-x);
    }
    cout << ans << endl;
    return 0;
}
