#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    set<int> st;
    int n;
    cin >> n;
    int temp = n;

    while(true){
      int sum = 0;
      while(temp > 0){
        int digit = temp % 10;
        sum += digit * digit;
        temp /= 10;
      }
      if(sum==1){
        cout << "Yes" << endl;
        return 0;
      }

      if(st.count(sum)){
        cout << "No" << endl;
        return 0;
      }
      st.insert(sum);
      temp = sum;
    }
    return 0;
}