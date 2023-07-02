#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, res;
    int d[110];
    cin >> N;
    for (int i=0; i<N; i++) cin >> d[i];

    int num[110] ={0};
    for (int i=0; i<N; i++) {
        num[d[i]]++;
    }

    res = 0;
    for(int i=0; i<N; i++) {
        if(num[i]) res++; // num[i]が０より大きかったら
    }

    cout << res << endl;
    return 0;
}