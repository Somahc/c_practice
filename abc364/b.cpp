#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int h, w;
	cin >> h >> w;
	int si, sj;
	cin >> si >> sj;
	si--; sj--;
	vector<vector<char>> c(h, vector<char>(w));
	for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin >> c[i][j];
	string x;
	cin >> x;
	for (char o : x) {
		int ni = si, nj = sj;
		if (o == 'L') nj--;
		else if (o == 'R') nj++;
		else if (o == 'U') ni--;
		else ni++;
		if (0 <= ni && ni < h && 0 <= nj && nj < w && c[ni][nj] == '.') {
			si = ni, sj = nj;
		}
	}
	cout << si + 1 << ' ' << sj + 1 << '\n';
    return 0;
}