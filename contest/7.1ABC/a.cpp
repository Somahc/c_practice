#include <iostream>
#include <vector>
using namespace std;

int main() {
    bool isOkay = true;
    vector<int> S(8);

    for (int i=0; i<8; i++) {
        cin >> S[i];

        if ((i != 0 && S[i] < S[i-1]) || S[i] % 25 != 0 || S[i] < 100 || S[i] > 675) {
            isOkay = false;
        }
    }

    if (isOkay) cout << "Yes" << endl;
    else cout << "No" << endl;
}