#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<float> seikoritsu(N+1);

    vector<int> A(N+1), B(N+1);


    for (int j=1; j<=N+1; j++) {
        cin >> A[j] >> B[j];
        seikoritsu[j] = A[j] / (A[j] + B[j]);
    }
}