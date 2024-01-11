#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    map<string, int> myoji, sei;
    vector<string> myoji_arr, sei_arr;

    rep(i,n){
        string first_name, last_name;
        cin >> first_name >> last_name;

        myoji_arr.push_back(first_name);
        sei_arr.push_back(last_name);

        myoji[first_name]++;
        sei[last_name]++;
    }
    rep(i,n){
        bool can_give_nickname = false;
        rep(k,n){
            bool s_ok = true;
            if((i != k) and ((myoji_arr[i] == myoji_arr[k] or myoji_arr[i] == sei_arr[k])) or (sei_arr[i] == myoji_arr[k] or sei_arr[i] == sei_arr[k])){
                s_ok = false;
            }
            if(s_ok){
                can_give_nickname = true;
            }
        }
        if(can_give_nickname){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}