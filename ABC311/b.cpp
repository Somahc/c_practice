#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d, ans = 0, tmp = 0;
    cin >> n >> d;
    char s[110][110];

    for(int i=0; i<n; i++) {
        for(int j=0; j<d; j++) {
            cin >> s[i][j];
        }
    }

    for(int i=0; i<d; i++) {
        bool isOkay = true;
        for(int j=0; j<n; j++) {
            if(s[j][i] == 'x') isOkay = false; 
            //cout << s[i][j];
        }
        if(isOkay) tmp++;
        else {
            tmp = 0;
        }
        ans = max(ans, tmp);
        //cout << endl;
    }

    cout << ans << endl;
}