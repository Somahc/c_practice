#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;

int main(){
    vector<string> s(15);
    s[0] = "###############";
    s[1] = "#.............#";
    s[2] = "#.###########.#";
    s[3] = "#.#.........#.#";
    s[4] = "#.#.#######.#.#";
    s[5] = "#.#.#.....#.#.#";
    s[6] = "#.#.#.###.#.#.#";
    s[7] = "#.#.#.#.#.#.#.#";
    s[8] = "#.#.#.###.#.#.#";
    s[9] = "#.#.#.###.#.#.#";
    s[10] = "#.#.#######.#.#";
    s[11] = "#.#.........#.#";
    s[12] = "#.###########.#";
    s[13] = "#.............#";
    s[14] = "###############";

    int r,c;
    cin >> r >> c;
    r--; c--;
    cout << (s[r][c] == '#' ? "black" : "white") << endl;
    return 0;
}