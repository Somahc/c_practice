#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    while(true){
        if((n%10) == ((n/100) % 10) *  ((n/10) % 10)){
            cout << n << endl;
            return 0;
        }
        else{
            n++;
        }
    }
}