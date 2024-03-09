#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int idou_x[4] = {0, 1, 0, -1};
int idou_y[4] = {-1, 0, 1, 0};

int main(){
    int h,w,n;
    int current_x = 0, current_y = 0, current_muki = 0;
    cin >> h >> w >> n;
    vector<vector<string>> s(h, vector<string>(w, "."));

    rep(i,n){
        if(s[current_x][current_y] == "."){
            s[current_x][current_y] = '#';
            current_muki++;
        }else{
            s[current_x][current_y] = '.';
            current_muki--;
            if(current_muki < 0) current_muki = 3;
        }
        current_x += idou_x[current_muki % 4];
        current_y += idou_y[current_muki % 4];

        if (current_x < 0) current_x = w - 1;
        if (current_y < 0) current_y = h - 1;
        if (current_x == w) current_x = 0;
        if (current_y == h) current_y = 0;
        cout << current_x << " " << current_y << endl;
        rep(i,h) {
        rep(j,w){
            cout << s[i][j];
        }
        cout << "\n";
    }
    }

    rep(i,h) {
        rep(j,w){
            cout << s[i][j];
        }
        cout << "\n";
    }
    return 0;
}