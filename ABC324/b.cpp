#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    long long int n;
    cin >> n;
    while(n % 2 == 0) n /= 2;
    while(n % 3 == 0) n /= 3;
    if(n == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}