#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a = {0,0,0};
    for(auto x : a) cout << x << " ";
    cout << endl;
    rep(i,n){
        a[2] += 1;
        for(auto x : a) cout << x << " ";
        cout << endl;
    }
    
    a = {0,0,0};

    rep(i,n){
        a[1] += 1;
        while((a[0] + a[1] + a[2]) <= n){
            for(auto x : a) cout << x << " ";
            cout << endl;
            a[2]++;
        }
        a[2] = 0;
    }

    a = {0,0,0};

    while((a[0] + a[1] + a[2]) <= n){
        a[0]++;
        while((a[0] + a[1] + a[2]) <= n){
            for(auto x : a) cout << x << " ";
            cout << endl;
            a[2]++;
        }
        a[2] = 0;
        while((a[0] + a[1] + a[2]) <= n){
            a[1]++;
            while((a[0] + a[1] + a[2]) <= n){
                for(auto x : a) cout << x << " ";
                cout << endl;
                a[2]++;
            }
            a[2] = 0;
        }
        a[2] = 0;
        a[1] = 0;
    }



    // do{
    //     int sum = 0;
    //     rep(i,3) {
    //         cout << a[i] << " ";
    //         sum += a[i];
    //     }
    //     cout << endl;
    //     if(sum < n){
    //         a[2]++;
    //     }
    // }while(sum <)
}