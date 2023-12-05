#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int x,y,z, ans = 0;
    cin >> x >> y >> z;
    if(y < 0){
        x=-1*x;
		y=-1*y;
		z=-1*z;
    }

    if(y > x){
        ans = abs(x);
    }else{
        if(z>y){
            ans = -1;
        }else{
            ans = abs(z) + abs(x-z);
        }
    }

    cout << ans << endl;
    return 0;
}