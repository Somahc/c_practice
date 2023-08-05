#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

vector<int> count(string s) {
    vector<int> res(27);
    for(char c : s) {
        if(c == '@') res[26]++;
        else res[c-'a']++;
    }
    return res;
}

bool solve() {
    string s, t;
    cin >> s >> t;
    vector<int> cs = count(s);
    vector<int> ct = count(t);

    string A = "atcoder";
    vector<bool> inA(26);
    for (char c : A) inA[c-'a'] = true;

    rep(i, 26) if(!inA[i]) {
        if(cs[i] != ct[i]) return false; // atcoder以外の文字が異なっていたら即アウト（@で置き換えしても同じにできないから）
    }

    rep(i, 26) if(inA[i]) { // atcoderのいずれかの文字の場合少ない方を@を使って多い方に合わせる
        if(cs[i] < ct[i]) cs[26] -= ct[i] - cs[i]; 
        else ct[26] -= cs[i] - ct[i];
    }

    if(cs[26] < 0 || ct[26] < 0) return false; //csかctで@が負の数（@が足りない）になっていたらアウト
    return true;
}

int main() {
    if (solve()) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}