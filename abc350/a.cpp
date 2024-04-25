#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    bool isAbc;
    isAbc = ("ABC" == s.substr(0, 3));

    // cout << isAbc << endl;
    int num;
    num = stoi(s.substr(3, 7));
    if (num == 316 || num == 0)
    {
        cout << "No" << endl;
        return 0;
    }
    if (isAbc && num < 350)
    {
        cout << "Yes" << endl;
        return 0;
    }
    else
    {
        cout << "No" << endl;
        return 0;
    }
}