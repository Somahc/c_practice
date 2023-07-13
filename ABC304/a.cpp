#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, min = 1e9, min_index = 0;
    cin >> N;
    vector<pair<string, int>> P(N);

    for(int i=0; i<N; i++) {
        cin >> P[i].first >> P[i].second;
        if(min > P[i].second) {
            min = P[i].second;
            min_index = i;
        }
    }

    for(int i=min_index; i<N; i++) {
        cout << P[i].first << endl;
    }
    for(int i=0; i<min_index; i++) {
        cout << P[i].first << endl;
    }
}