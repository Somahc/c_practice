#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, tarop, hanakop;
    tarop = hanakop = 0;
    cin >> n;
    for (int i=0; i<n; i++) {
        string taro, hanako;
        cin >> taro >> hanako;
        if (taro > hanako) {
            tarop += 3;
        }else if (taro < hanako) {
            hanakop += 3;
        }else{
            tarop +=1;
            hanakop += 1;
        }
    }

    cout << tarop << " " << hanakop << endl;
}