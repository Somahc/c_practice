#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, kasane;
    kasane = 1;
    cin >> N;
    vector<int> d(N);

    for(int i=0; i<N; i++) {
        cin >> d[i];
    }

    sort(d.begin(), d.end(), greater<int>());

    for(int i=0; i<N; i++) {
        if(i != 0 && d[i] < d[i-1]) kasane++;
    }

    cout << kasane << endl;
    return 0;
}