#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

bool isSubset(const std::set<int> &A, const std::set<int> &B)
{
    for (const auto &elem : A)
    {
        if (B.find(elem) == B.end())
        {
            return false; // elemがBに見つからない場合
        }
    }
    return true; // 全ての要素がBに見つかった場合
}

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(t);
    vector<set<int>> tate(n), yoko(n), naname(2);
    set<int> a_set, ans_set, ansnoset;
    rep(i, n)
    {
        naname[0].insert(1 + (n + 1) * i);
        naname[1].insert(n + (n - 1) * i);
        rep(j, n)
        {
            tate[i].insert(i + n * j + 1);
            yoko[i].insert(j + 1 + n * i);
        }
    }
    rep(j, t)
    {
        cin >> a[j];
        a_set.insert(a[j]);
        // for (int i = 0; i < n; i++)
        // {
        //     if (isSubset(tate[i], a_set) || isSubset(yoko[i], a_set) || isSubset(naname[0], a_set) || isSubset(naname[1], a_set))
        //     {
        //         cout << ++j << endl;
        //         return 0;
        //     }
        // }
    }
    bool isAru = false;
    for (int i = 0; i < n; i++)
    {
        // if (isSubset(tate[i], a_set) || isSubset(yoko[i], a_set) || isSubset(naname[0], a_set) || isSubset(naname[1], a_set))
        // {

        //     return 0;
        // }

        if (isSubset(tate[i], a_set))
        {
            cout << "tate" << i << endl;
            isAru = true;
            ansnoset = tate[i];
            break;
        }
        else if (isSubset(yoko[i], a_set))
        {
            cout << "yoko" << i << endl;
            isAru = true;
            ansnoset = yoko[i];
            break;
        }
        else if (isSubset(naname[0], a_set))
        {
            cout << "naname[0]" << endl;
            ansnoset = naname[0];
            isAru = true;
            break;
        }
        else if (isSubset(naname[1], a_set))
        {
            cout << "naname[1]" << endl;
            ansnoset = naname[1];
            isAru = true;
            break;
        }
    }
    if (!isAru)
    {
        cout << "-1" << endl;
        return 0;
    }
    rep(i, t)
    {
        ans_set.insert(a[i]);
        if (isSubset(ansnoset, ans_set))
        {
            cout << ++i << endl;
            return 0;
        }
    }
}