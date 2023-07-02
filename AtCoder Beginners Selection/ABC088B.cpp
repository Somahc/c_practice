#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Alice, Bob;
    Alice = 0;
    Bob = 0;
    cin >> N;
    vector<int> a(N);

    for(int i=0; i<N; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());
    for(int i=0; i<N; i++) {
        if(i % 2 == 0) Alice += a[i];
        else Bob += a[i];
    }

    cout << Alice - Bob << endl;
    return 0;
}