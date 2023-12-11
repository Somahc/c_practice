#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,m,muji=0,logo=0,mujiMax=0,logoMax=0,saicho=0,days=0;
    int saicho_day_end = 0;
    vector<int> zero;
    zero.push_back(0);
    cin >> n >> m;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        days++;
        if(s[i] == '0' || i == (s.size()-1)){
            if(s[i] == '0') days--;
            if(s[i] == '1') muji++;
            if(s[i] == '2') logo++;
            // if(s[i] == '0'){
            //     zero.push_back(i);
            // }else if(s[i] == (s.size()-1)){
            //     zero.push_back(s.size());
            // }
            logoMax = max(logoMax, logo);
            mujiMax = max(mujiMax, muji);
            muji = 0;
            saicho = max(saicho,days);
            // if(saicho == days){
            //     saicho_day_end = i;
            // }
            logo = 0;
            days = 0;
        }
        if(s[i] == '1'){
            muji++;
        }
        if(s[i] == '2'){
            logo++;
        }
    }

    cout << logoMax << " " << mujiMax << " " << saicho << endl;

    if(mujiMax < 0) mujiMax = 0;
    int ans = 0;
    if(saicho < (mujiMax + logoMax) && logoMax < mujiMax){
        ans = logoMax + (mujiMax - logoMax);
    }else if(saicho < (mujiMax + logoMax)){
        cout << "k" << endl;
        ans = saicho;
    }else{
        if(logoMax < mujiMax){
            ans = logoMax + (mujiMax - logoMax);
        }else{
            ans = logoMax + mujiMax;
            // cout << logoMax << endl;
        }
    }
    
    if(mujiMax >= m) ans -= m;

    cout << ans << endl;

    
        
    return 0;
}