#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, result;
    result = 0;
    bool isEven = true;
    cin >> N;
    vector<int> A(N);

    for(int i=0; i<N; i++) {
        cin >> A[i];
    }

    while(true) {

        for(int i=0; i<N; i++) {
            if(A[i] % 2 != 0) {
                isEven = false;
            }
            A[i] /= 2;
        }

        if(!isEven) break;

        result++;
    }
    cout << result << endl;
    return 0;
}