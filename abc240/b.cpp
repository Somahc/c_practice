#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    set<int> a;

    rep(i, n)
    {
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    }
    cout << a.size() << endl;
}