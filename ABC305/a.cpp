#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    if(N % 5 == 0) cout << N << endl;
    else {
        if(N % 5 >= 3) {
            cout << N + (5 - (N % 5)) << endl;
        } else {
            cout << N - (N % 5) << endl;
        }
    }
}