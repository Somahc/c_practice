#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int k,g,m,glass=0,cup=0;
    cin >> k >> g >> m;
    rep(i,k){
        if(glass==g){
            glass = 0;
            // cout << glass << " " << cup << endl;
            continue;
        }else if(cup == 0){
            cup = m;
            // cout << glass << " " << cup << endl;
            continue;
        }else{
            if(cup > (g-glass)){
                cup = cup - (g-glass);
                glass = g;
                // cout << glass << " " << cup << endl;
                continue;
            }else{
                glass += cup;
                cup = 0;
                // cout << glass << " " << cup << endl;
                continue;
            }
        }
        // cout << glass << " " << cup << endl;
    }

    cout << glass << " " << cup << endl;
    return 0;
}