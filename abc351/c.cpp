#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int size = 0;
    size = n;
    vector<ll> a(n), b;
    rep(i, n)
    {
        cin >> a[i];
        b.push_back(a[i]);
        if (i != 0)
        {

            while (b[b.size() - 1] == b[b.size() - 2])
            {
                b[b.size() - 2] = b[b.size() - 2] + 1;
                b.pop_back();
                if (b.size() == 1)
                    break;
            }
        }
    }

    cout << b.size() << endl;

    return 0;
}