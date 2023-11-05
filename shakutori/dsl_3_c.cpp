#include<bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<long long> a(n);
    rep(i,n) cin >> a[i];

    for(int j=0; j<q; ++j){
        long long x; cin >> x;
        
        long long res = 0;

        int right = 0;
        long long sum = 0;
        for(int left = 0; left < n; left++){
            while(right < n && sum + a[right] <= x) {
                sum += a[right];
                ++right;
            }

            res += (right - left);

            if(right == left) right++;
            else sum -= a[left];
        }
        cout << res << endl;
    }
}