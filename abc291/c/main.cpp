#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, x=0, y=0;
    string s;
    cin >> n >> s;
    set<pair<int,int>> visited({{0,0}});

    for(auto c:s){
        if(c == 'L') x--;
        if(c == 'R') x++;
        if(c == 'U') y++;
        if(c == 'D') y--;

        if(visited.find({x,y}) != visited.end()){
            cout << "Yes" << endl;
            return 0;
        }
        visited.insert({x,y});
    }

    cout << "No" << endl;
    return 0;
}
