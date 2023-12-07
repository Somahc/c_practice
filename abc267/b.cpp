#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<bool> isAllDown(7, false);
    if(s[0] == '1'){
        cout << "No" << endl;
        return 0;
    }

    if(s[6] == '0') isAllDown[0] = true;
    if(s[3] == '0') isAllDown[1] = true;
    if(s[1] == '0' && s[7] == '0') isAllDown[2] = true;
    if(s[4] == '0') isAllDown[3] = true;
    if(s[2] == '0' && s[8] == '0') isAllDown[4] = true;
    if(s[5] == '0') isAllDown[5] = true;
    if(s[9] == '0') isAllDown[6] = true;

    int flag = 0;
    for(auto x : isAllDown){
        if(flag == 0 && x == false){
            flag++;
            continue;
        }
        if(flag == 1 && x == true){
            flag++;
            continue;
        }
        if(flag == 2 && x == false){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}