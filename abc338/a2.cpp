#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    string s;
    cin >> s;
    bool is_upper_first = false, is_lower_nokori = true;
    for(int i = 0; i < (int)s.size(); i++){
        if(i == 0 and s[i] >= 'A' and s[i] <= 'Z'){
            is_upper_first = true;
        }
        if(i != 0 and s[i] >= 'A' and s[i] <= 'Z'){
            is_lower_nokori = false;
        }
    }
    if(is_upper_first and is_lower_nokori) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}