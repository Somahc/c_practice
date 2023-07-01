#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int price = 0;

    vector<string> C(N+1);
    vector<string> D(M+1);
    vector<int> P(M+1);

    for (int i=1; i<=N; i++) {
        cin >> C[i];
    }
    for (int i=1; i<=M; i++) {
        cin >> D[i];
    }
    for (int i=0; i<=M; i++) {
        cin >> P[i];
    }

    int a = N;
    for (int i=1; i<=N; i++) {
        //cout << i << endl;
        for (int j=1; j<=M; j++) {
            if (C[i] == D[j]) {
                price += P[j];
                a--;
            }
        }
    }

    cout << price + P[0]*a << endl;
}