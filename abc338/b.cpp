#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    map<char, int> mp;
    string s;
    cin >> s;
    for(char x : s){
        mp[x]++;
    }
    int max_num = 0;
    for(auto x : mp){
        max_num = max(max_num, x.second);
    }
    vector<char> freq;
    for(auto x : mp){
        if(x.second == max_num){
            freq.push_back(x.first);
        }
    }
    sort(freq.begin(), freq.end());
    cout << freq[0] << endl;
    return 0;
}