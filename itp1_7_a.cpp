#include <iostream>
using namespace std;

int main() {
    int m, f, r;

    while(1) {
        cin >> m >> f >> r;
        // scanf("%d %d %d", &m, &f, &r);
        if(m == -1 && f == -1 && r == -1) break;

        if(m == -1 || f == -1) {
            cout << "F" << endl;
        }else if((m+f) >= 80) {
            cout << "A" << endl;
        }else if(65 <= (m+f)) {
            cout << "B" << endl;
        }else if(50 <= (m+f)) {
            cout << "C" << endl;
        }else if(30 <= (m+f)) {
            if(r >= 50) {
                cout << "C" << endl;
            }else{
                cout << "D" << endl;
            }
        }else if((m+f) < 30) {
            cout << "F" << endl;
        }
    }

    return 0;

}