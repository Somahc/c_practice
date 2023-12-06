#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int A, B, a, b;
    cin >> A >> B >> a >> b;
    int cnt = 0;
    while(true){
        if((A*cnt + (a-b)) % B == 0) {
            cout << A*cnt + a << endl;
            return 0;
        }
        cnt++;
    }
    return 0;
}