#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    string output = "";

    cin >> n >> s;

    for (int i=0; i<n; i++) {
        char ch = s[i];
        output += ch;
        output += ch;
    }
    cout << output << endl;
}