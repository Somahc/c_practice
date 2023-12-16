#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int huerukazu = 2, ruiseki = 1, ruiseki_hon = 1, group = 0;
    while(ruiseki_hon < n){
        ruiseki += huerukazu;
        huerukazu += 1;
        ruiseki_hon += ruiseki;
        // cout << "ruiseki: " << ruiseki_hon << endl;
        group++;
    }
    string moto_num_str;
    rep(i,group+1){
        moto_num_str += '1';
    }
    int moto_num = stoi(moto_num_str);
    int nanbanme = n - group * group;
    nanbanme--;
    // cout << moto_num << endl;
    // cout << nanbanme << endl;
    int group2 = 1, index = 0;
    while(nanbanme > group2){
        // cout << "a" << endl;
        index++;
        group2 = index*(index+1)/2;
    }
    string nikome_str;
    rep(i,index){
        nikome_str += "1";
    }
    string saigo_str;
    index--;
    int saigo_keta = nanbanme - index*(index+1)/2;
    rep(i,saigo_keta){
        saigo_str += "1";
    }
    // cout << saigo_str << endl;

    int ans = stoi(nikome_str) + stoi(saigo_str) + moto_num;
    cout << ans << endl;
    return 0;
}