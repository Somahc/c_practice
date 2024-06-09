#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{

    string s;
    cin >> s;
    int upper = 0, lower = 0;
    for (char c : s)
    {
        if (isupper(c))
            upper++;
        else
            lower++;
    }
    if (upper > lower)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << endl;

    return 0;
}