#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, max = -1;
    cin >> n;
    set<int> st;
    rep(i,n) {
        int a;
        cin >> a;
        // max = max < a ? a : max;
        st.insert(a);
    }
    auto secondLastElement = --(--st.end());
    cout << *secondLastElement << endl;
}
