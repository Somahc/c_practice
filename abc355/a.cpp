#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;
    set<int> shogen;
    shogen.insert(a);
    shogen.insert(b);
    if (shogen.size() == 2)
    {
        for (int i = 1; i <= 3; i++)
        {
            if (!shogen.count(i))
            {
                cout << i << endl;
                return 0;
            }
        }
    }
    else
    {
        cout << "-1" << endl;
        return 0;
    }
    return 0;
}