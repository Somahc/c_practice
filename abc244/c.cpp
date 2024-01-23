#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    map<int, bool> detakazu;
    for(int i = 1; i <= 2*n + 1; i++){
        detakazu.insert({i, false});
    }
    while(true){
        for(int i = 1; i <= 2*n + 1; i++){
            if(detakazu[i] == false){
                detakazu[i] = true;
                cout << i << endl;
                break;
            }
        }
        int aoki;
        cin >> aoki;
        if(aoki == 0){
            return 0;
        }
        detakazu[aoki] = true;
    }
    return 0;
}