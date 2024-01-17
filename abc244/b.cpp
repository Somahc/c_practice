#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int x_muki[] = {1, 0, -1, 0};
int y_muki[] = {0, -1, 0, 1};

int main(){
    int n, state = 0, x = 0, y = 0;
    cin >> n;
    string t;
    cin >> t;
    rep(i,n){
        if(t[i] == 'R'){
            state++;
        }else{
            x += x_muki[state % 4];
            y += y_muki[state % 4];
        }
    }
    cout << x << " " << y << endl;
    return 0;
}