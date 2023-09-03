#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
    set<pair<int,int>> st = {};

    int n;
    cin >> n;

    rep(i,n){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        for(int i=d-c; i==d; i++){
            for(int j=a; j<b; j++){
                st.insert(make_pair(i,j));
            }
        }
    }

    cout << st.size() << endl;
}