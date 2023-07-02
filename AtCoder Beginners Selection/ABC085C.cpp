#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Y, x, y, z;
    cin >> N >> Y;
    x = y = z = -1;
    for(int i=0; i<=N; i++) {
        for(int j=0; j+i<=N; j++) {
            
            int total = 10000*i + 5000*j + 1000*(N-i-j);
            if(total == Y) {
                x = i;
                y = j;
                z = N-i-j;
            }
        }
    }
    cout << x << " " << y << " " << z << endl;;
    return 0;
}