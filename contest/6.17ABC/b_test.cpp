#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int array[2];
    int ans = 0;

    for (int i=0; i<2; i++) {
        cin >> array[i];
        if (array[i] == 1) {
            ans += pow(2, i);
        }
    }
    
    cout << ans << endl;


}