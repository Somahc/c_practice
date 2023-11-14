#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)
const int INF = (int)1e9;
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

int n,m;
int a[20][20];
int x[100], y[100];
bool naka[100][100];

int main(){
    cin >> n;
    rep(i,n) rep(j,n) cin >> a[i][j];
    cin >> m;
    rep(i,m) cin >> x[i] >> y[i];

    vector<int> vec;
    rep(i,n) vec.push_back(i+1);
    rep(i,m){
        naka[x[i]][y[i]] = true;
        naka[y[i]][x[i]] = true;
    }

    int ans = INF;
    do{
        int sum = 0;
        bool flag = true;
        rep(i,n-1){
            if(naka[vec[i]][vec[i+1]] == true){
                flag = false;
                break;
            }
        }
        
        if(flag == true){
            rep(i,n) sum += a[vec[i]-1][i];
            chmin(ans, sum);
        }
    } while(next_permutation(vec.begin(), vec.end()));

    if(ans == INF) ans = -1;
    cout << ans << endl;
    return 0;
}