#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, kensakuStr;
    cin >> str1 >> kensakuStr;

    str1 += str1;
    
    if (str1.find(kensakuStr) == string::npos) cout << "No" << endl;
    else cout << "Yes" << endl;
}