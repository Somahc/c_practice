#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

bool isTonari(string s){
   int start = s[0] - 'A', end = s[1] - 'A';
   int kyori = abs(start - end);
   if(kyori == 1 || kyori == 4) return true;
   return false;
}

int main(){
    vector<string> s(2);
    rep(i,2){
        cin >> s[i];
    }
    if(isTonari(s[0]) == isTonari(s[1])){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}