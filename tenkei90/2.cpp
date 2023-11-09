#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

bool isValid(const string &s){
    int score = 0;
    for(auto c : s) {
        if (c == '(') ++score;
        else --score;

        if (score < 0) return false;
    }

    return (score == 0);
}

int main(){
    int n;
    cin >> n;

    for(int bit = 0; bit < (1<<n); ++bit){
        string s = "";

        for(int i = n - 1; i>= 0; --i){
            if(!(bit & (1<<i))) s += '(';
            else s += ')';
        }
        if(isValid(s)) cout << s << endl;
    }
}