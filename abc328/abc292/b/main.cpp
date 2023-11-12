#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> x(n);
    rep(i,q){
        int a, b;
        cin >> a >> b;
        if(a == 1){
            x[b-1].second += 1;
        }else if(a == 2){
            x[b-1].second = 2;
        }else{
            if(x[b-1].second != 2){
                cout << "No" << endl;
            }else if(x[b-1].second == 2){
                cout << "Yes" << endl;
            }
        }
    }
}
