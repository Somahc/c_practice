#include<bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

long long int fastExponentiation(long long int base, int exponent) {
    long long int result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
}

int main() {
    long long int b;
    cin >> b;

    long long int left = 0, right = b;
    while (left <= right) {
        long long int mid = left + (right - left) / 2;
        long long int tmp = fastExponentiation(mid, mid);

        if (tmp == b) {
            cout << mid << endl;
            return 0;
        } else if (tmp < b) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << "-1" << endl;
    return 0;
}