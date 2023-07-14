#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int N;
    cin >> N;
    
    if(N <= 1000 - 1) cout << N;
    else if(1000 <= N && N <= 10000-1) cout << N / 10 * 10;
    else if(10000 - 1 <= N && N <= 100000 - 1) cout << N / 100 * 100;
    else if(100000 - 1 <= N && N <= 1000000 - 1) cout << N / 1000 * 1000;
    else if(1000000 - 1 <= N && N <= 10000000 - 1) cout << N / 10000 * 10000;
    else if(10000000 - 1 <= N && N <= 100000000 - 1) cout << N / 100000 * 100000;
    else if(100000000 - 1 <= N && N <= 1000000000 - 1) cout << N / 1000000 * 1000000;
}
