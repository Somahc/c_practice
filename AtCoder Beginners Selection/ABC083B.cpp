#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B, result;
    cin >> N >> A >> B;
    result = 0;
    for(int i=0; i<=N; i++) {
        int sum = 0;
        int a = i;
        while(a) {
            sum += a%10;
            a /= 10;
        }
        if(sum >= A && sum <= B) result += i;
    }

    cout << result << endl;
    return 0;
}