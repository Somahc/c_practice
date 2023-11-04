#include<bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    vector<string> s(9);
    rep(i,9){
        set<int> st = {};
        cin >> s[i];
        rep(j,9){
            st.insert(s[i][j] - '0');
        }
        if(st.size() != 9){
            cout << "No" << endl;
            return 0;
        }
    }
    rep(i,9){
        set<int> st = {};
        rep(j,9){
            st.insert(s[i][j] - '0');
        }
        if(st.size() != 9){
            cout << "No" << endl;
            return 0;
        }
    }
    rep(i,3){
        rep(j,3){
            set<int> st = {};
            rep(k,3){
                rep(l,3){
                    st.insert(s[i*3+k][j*3+l] - '0');
                }
            }
            if(st.size() != 9){
                cout << "No" << endl;
                return 0;
            }
        }
    }

}