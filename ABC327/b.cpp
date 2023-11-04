#include<bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    long long b;
    cin >> b;
    for(int a = 1; a <= 15; a++){
        long long x = 1;
        for(int i = 0; i < a; i++) x *= a;
        if(x == b){
            cout << a << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}