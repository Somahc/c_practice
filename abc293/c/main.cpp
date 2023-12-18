#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    int a[11][11];
    for(int y = 1; y <= h; y++){
        for(int x = 1; x <= w; x++){
            cin >> a[x][y];
        }
    }

    int p[20], l = h + w - 2, ans = 0;
    for(int i = 1; i <= l; i++){
        if(i > w-1) p[i] = 1;
        else p[i] = 0;
    }

    do{
        int x=1, y=1;
        set<int> st; st.insert(a[1][1]);
        for(int i = 1; i <= l; i++){
            if(p[i]) y++;
            else x++;

            st.insert(a[x][y]);
        }
        if(st.size() == l+1) ans++;
    }while(next_permutation(p+1, p+1+l));

    cout << ans << endl;
    return 0;
}
