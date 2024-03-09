#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    vector<int> a;
    while (true)
    {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
        if (tmp == 0)
        {
            break;
        }
    }
    reverse(begin(a), end(a));
    for (auto x : a)
    {
        cout << x << endl;
    }
}