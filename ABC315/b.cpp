#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
    int m, middleDay = 0, tmp = 0;
    cin >> m;
    vector<int> d(m);


    rep(i, m) {
        cin >> d[i];
        tmp += d[i];
    }

    middleDay = (tmp+1) / 2;
    tmp = 0;
    int month = 0;
    do {
        tmp += d[month];
        month++;
        if(tmp >= middleDay) {
            cout << month << " ";
            break;
        }
    } while(true);
    
    int days = 0;
    rep(i, month-1){
        days += d[i];
    }
    
    int ansDay = 0;
    ansDay = middleDay - days;

    cout << ansDay << endl;
    return 0;
}