#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<bool> f(n);
    vector<int> answer(n);

    rep(i,m){
        int a;
        cin >> a;
        f[a-1] = true;   
    }

    for(int i=n-1; i>=0; i--){
        if(f[i] == true) answer[i] = 0;
        else answer[i] = answer[i+1] + 1;
    }

    rep(i,n) cout << answer[i] << '\n';

    // vector<int> answer(n);
    // vector<bool> isHanabi(n);
    // rep(i, m) {
    //     int input;
    //     cin >> input;
    //     isHanabi[input-1] = true;
    // }

    // rep(i,n){
    //     int j=0;
    //     if(isHanabi[i] == true){
    //         answer[i] = 0;
    //     }else{
    //         do {
    //             j++;
    //             if(isHanabi[i+j] == true) answer[i] = j;
    //         } while(isHanabi[i+j] == false);
    //     }
    // }

    // rep(i,n) cout << answer[i] << endl;

}