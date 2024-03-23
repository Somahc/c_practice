#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int w, b;
    cin >> w >> b;
    // while (true)
    // {
    //     if (w + b < 30)
    //     {
    //         w += 9;
    //         b += 6;
    //         break;
    //     }
    //     w -= 9;
    //     b -= 6;
    // }
    // cout << w << " " << b << endl;
    string s = "wbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbw";
    // cout << (int)s.size() << endl;

    for (int i = 0; i < (int)s.size() - (w + b) + 1; i++)
    {
        string s_cp = s, s_cp2 = "";
        int ans_w = 0, ans_b = 0;
        s_cp2 = s_cp.substr(i, w + b);
        // cout << s_cp << endl;
        for (char c : s_cp2)
        {
            if (c == 'w')
                ans_w++;
            else
                ans_b++;
        }
        // cout << ans_w << " " << ans_b << endl;
        if (ans_w == w and ans_b == b)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}