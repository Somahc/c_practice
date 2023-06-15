#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;

int main() {
    char ch;
    int alpha[26] = {};

    while(scanf("%c", &ch) != EOF) {
        if (isalpha(ch)) {
            ++alpha[tolower(ch) - 'a'];
        }
    }

    for (int i=0; i<26; i++) {
        printf("%c : %d\n", i + 'a', alpha[i]);
    }

    return 0;
}