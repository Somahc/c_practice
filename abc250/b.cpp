#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    
    vector<string> X(a*n,string(b*n,'-'));
    for(int i = 0; i < a*n; i++){
        for(int j = 0; j < b*n; j++){
            if(((i/a) + (j/b)) % 2 == 0) X[i][j] = '.';
            else X[i][j] = '#';
        }
    }

    for(int i = 0; i < a*n; i++){
        cout << X[i] <<endl;
    }

    return 0;
}