#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,ans=0;
    cin >> n;
    string s;
    cin >> s;
    vector<int> mx(26, 0);
    int l=0;
    while(l<n){
        int r=l+1;
        while(r<n && s[r]==s[l]) r++;
        int c = s[l]-'a';
        mx[c] = max(mx[c], r-l);
        l=r;
    }

    for(int i=0; i<26; i++){
        ans += mx[i];
    }
    cout << ans << endl;
}