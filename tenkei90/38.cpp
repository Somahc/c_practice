#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)
const int INF = (int)1e9;
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const long long POW18 = 1000000000000000000LL;

long long int gcd(long long int a, long long int b){
    if(a%b == 0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}



long long int lcm(long long int a, long long int b){
    return a*b/gcd(a, b);
}

int main(){
    long long A, B, THRESHOLD = 1000000000000000000LL;
	cin >> A >> B;

	long long C = A / gcd(A, B);
	if (B <= THRESHOLD / C) cout << C * B << endl;
	else cout << "Large" << endl;
	return 0;
}