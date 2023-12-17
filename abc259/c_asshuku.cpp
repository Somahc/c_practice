#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

// string encode(const string& str){
//     int n = (int)str.size();
//     string ret = "";
//     for(int l = 0; l < n;){
//         int r = l + 1;
//         for(; r < n && str[l] == str[r]; r++) {};
//         ret.push_back(str[l]);
//         string num_str = to_string(r - l);
//         ret += num_str;
//         l = r;
//     }
//     return ret;
// }

string s,t;
vector<pair<char, int>> runLengthEncoding(string s){
    int n = s.length();

    vector<pair<char,int>> res;
    char pre = s[0];
    int cnt = 1;
    for(int i = 0; i < n; i++){
        if(pre != s[i]){
            res.push_back({pre, cnt});
            pre = s[i];
            cnt = 1;
        }
        else cnt++;
    }

    res.push_back({pre, cnt});
    return res;
}
#define YES "Yes"
#define NO "No"

string solve(){
    auto vs = runLengthEncoding(s);
    auto vt = runLengthEncoding(t);

    if(vs.size() != vt.size()) return NO;

    int N = vs.size();
    for(int i = 0; i < N; i++){
        if(vs[i].first != vt[i].first) return NO;
        if(vs[i].second > vt[i].second) return NO;
        if(vs[i].second == 1 && 1 < vt[i].second) return NO;
    }
    return YES;
}

int main(){
    cin >> s >> t;
    cout << solve() << endl;
    return 0;
}