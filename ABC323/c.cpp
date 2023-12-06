#include<bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,m,maxi = -1;
    cin >> n >> m;
    vector<int> a(m), score(n);
    vector<string> s(n);

    rep(i,m) cin >> a[i];
    rep(i,n){
        cin >> s[i];
        rep(j,m){
            if(s[i][j] == 'o'){
                score[i] += a[j];
            }
        }
        score[i] += (i+1);
        maxi = max(maxi, score[i]);
    }

    rep(i,n){
        vector<int> nokori(n);
        rep(j,m){
            if(s[i][j] == 'x') nokori.push_back(a[j]);
        }
        sort(nokori.begin(),nokori.end(),greater<int>());
        int ans = 0;
        for(auto x : nokori){
            if(score[i] >= maxi){
                cout << ans << endl;
                break;
            }
            score[i] += x;
            ans++;
        }
        
    }




}