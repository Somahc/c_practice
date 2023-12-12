#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using P = pair<int,int>;

int main(){
    vector<int> h(3),w(3);
    rep(i,3) cin >> h[i];
    rep(i,3) cin >> w[i];
    int masu[3][3], ans = 0;

    for(int i=1; i<=28; i++){
        for(int j = 1; j <= 28; j++){
            for(int k = 1; k <= 28; k++){
                for(int l = 1; l <= 28; l++){
                    masu[0][0] = i;
                    masu[0][1] = j;
                    masu[1][0] = k;
                    masu[1][1] = l;
                    if(i+j >= h[0]) continue;
                    else{
                        masu[0][2] = h[0] - i - j;
                    }
                    if(k+l >= h[1]) continue;
                    else{
                        masu[1][2] = h[1] - k - l;
                    }
                    if(i+k >= w[0]) continue;
                    else{
                        masu[2][0] = w[0] - i - k;
                    }
                    if(j+l >= w[1]) continue;
                    else{
                        masu[2][1] = w[1] - j - l;
                    }
                    masu[2][2] = w[2] - masu[0][2] - masu[1][2];
                    if(masu[2][2] < 1 or masu[2][2] > 28) continue;
                    if(h[2] == masu[2][0] + masu[2][1] + masu[2][2]){
                        ans++;
                    }

                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}