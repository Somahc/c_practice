#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> score(n, 0);

    rep(i, t)
    {
        int a, b;
        cin >> a >> b;
        score[a - 1] += b;
        set<int> st;
        for (int x : score)
        {
            st.insert(x);
        }
        cout << st.size() << endl;
    }
    return 0;
}