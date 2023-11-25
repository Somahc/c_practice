#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;

    vector<string> g(h);
    for(auto&s : g) cin >> s;
    vector vis(h, vector(w, false));

    int i=0, j=0;
    while(1){
        if(vis[i][j] == true){
            cout << "-1" << endl;
            return 0;
        }
        vis[i][j] = true;
        if(g[i][j] == 'R' and j != w-1) j++;
        else if(g[i][j] == 'L' and j != 0) j--;
        else if(g[i][j] == 'U' and i != 0) i--;
        else if(g[i][j] == 'D' and i != h-1) i++;
        else {
            cout << i+1 << " " << j+1 << endl;
            return 0;
        }
    }
}
