#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int array[64];
    unsigned long long int ans = 0;

    for (int i=0; i<64; i++) {
        cin >> array[i];
        if (array[i] == 1) {
            //ans += pow(2, i);
             ans += 1ULL << i;
        }
    }
    
    cout << ans << endl;
}