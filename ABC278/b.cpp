#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

bool isMisjudgable(int h, int m){
    int a = h/10, b = h%10, c = m/10, d = m%10;
    if((a == 1 or a ==0) && b < 6) return true;
    if(a == 2 and b < 6 and c < 4) return true;
    return false;
}

int main(){
    int h,m;
    cin >> h >> m;
    while(1){
        if(isMisjudgable(h,m)){
            cout << h << " " << m << endl;
            return 0;
        }
        m++;
        if(m == 60){
            m = 0;
            h++;
        }
        if(h == 24) h = 0;
    }
}