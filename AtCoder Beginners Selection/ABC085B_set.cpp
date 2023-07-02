#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, res;
    int d[110];
    cin >> N;
    for(int i=0; i<N; i++) cin >> d[i];

    set<int> values;
    for(int i=0; i<N; i++) {
        values.insert(d[i]);
    }

    cout << values.size() << endl;
    return 0;
}