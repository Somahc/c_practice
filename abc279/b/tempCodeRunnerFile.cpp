#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    if(s.size() < t.size()){
        cout << "No" << endl;
        return 0;
    }
    for(int i = 0; i < (s.size() - t.size()); i++){
        if(s.substr(i, t.size()) == t){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
