#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>

using namespace std;

int main() {
    string kensakuWord;
    cin >> kensakuWord;

    int answer = 0;

    while(1) {
        string w;
        cin >> w;
        if (w == "END_OF_TEXT") {
            break;
        }

        for (int i=0; i<w.length(); i++) {
            if (isupper(w[i])) {
                w[i] = tolower(w[i]);
            }
        }
        if (w == kensakuWord) {
            answer++;
        }
    }

    cout << answer << endl;

}