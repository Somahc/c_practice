#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    string currentDish;
    bool isPreviousSweet = false;

    for (int i = 0; i < n; i++) {
        cin >> currentDish;
        if (currentDish == "sweet") {
            if (isPreviousSweet) {
                cout << "No" << endl;
                return 0;
            }

            isPreviousSweet = true;
        } else {
            isPreviousSweet = false;
        }
    }

    cout << "Yes" << endl;
    return 0;

}