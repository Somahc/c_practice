#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    long long int n, t, sum = 0;
    cin >> n >> t;
    vector<long long int> a(n);
    vector<long long int> b(n+1, 0);
    rep(i,n){
        cin >> a[i];
        b[i+1] = b[i] + a[i];
        sum += a[i];
    }
    // t %= sum;
    long long int nokori = t % sum;

    // cout << t << endl;
    long long int song_num = upper_bound(b.begin(), b.end(), nokori) - b.begin();
    cout << song_num << " ";
    cout << nokori - b[song_num - 1] << endl;
}
