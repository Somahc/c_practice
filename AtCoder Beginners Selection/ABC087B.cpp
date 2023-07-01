#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, X, kumiawase;
    cin >> A >> B >> C >> X;
    kumiawase = 0;

    for(int i=0; i<=A; i++) {
        for(int j=0; j<=B; j++) {
            for(int k=0; k<=C; k++) {
                if(X == (500*i + 100*j + 50*k)) {
                    // cout << i << j << k;
                    kumiawase++;
                }
            }
        }
    }

    cout << kumiawase << endl;
    return 0;
}