#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n;
    bool flag;
    string s[100];
    string t;

    cin >> n;
    for(int i=0; i<n; i++) cin >> s[i];

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i != j) {
                t=s[i]+s[j];
                l=t.size();
                flag = true;
                for(int k=0; k<l; k++)if(t[k] != t[l-1-k])flag = false;
                if(flag) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    } 
    cout << "No" << endl;
    return 0;
    // bool result;
    // vector<string> s(n);
    // for(int i=0; i<n; i++) {
    //     cin >> s[i];
    // }

    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         if(i != j) {
    //             string t = s[i] + s[j];
    //             l = t.size();
    //             result = true;
    //             for(int k=0; k<l; k++) {
    //                 if(t[k] != t[l + 1 - k]) {
    //                     result = false;
    //                 }
    //             }
    //             if(result) cout << "Yes" << endl;
    //             return 0;
    //         }
    //     }
    // }
    // cout << "No" << endl;

    // return 0;
}