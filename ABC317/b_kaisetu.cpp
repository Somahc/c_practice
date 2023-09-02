#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
    int n,a,b,c,d,ans=0;
    bool g[100][100]={};

    cin >> n;
    rep(k,n){
        cin >> a >> b >> c >> d;
        for(int i=a; i<b; i++)for(int j=c; j<d; j++)g[i][j]=true;
    }

    for(int i=0; i<100; i++)for(int j=0; j<100; j++)if(g[i][j])ans++;
    cout << ans << endl;
}