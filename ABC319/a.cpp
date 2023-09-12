#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    vector<pair<string, int>> top = {{"tourist", 3858}, {"ksun48", 3679}, {"Benq", 3658}, {"Um_nik", 3648}, {"apiad", 3638}, {"Stonefeang", 3630}, {"ecnerwala", 3613}, {"mnbvmar", 3555}, {"newbiedmy", 3516}, {"semiexp", 3481}};
    string s;
    cin >> s;

    rep(i,10){
        for(auto v : top){
            if(s == v.first){
                cout << v.second << endl;
                return 0;
            }
        }
    }
}