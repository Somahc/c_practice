#include<bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    vector<vector<int>> s(9, vector<int>(9));
    rep(i,9){
        rep(j,9){
            cin >> s[i][j];
        }
    }

    rep(i,9){
        set<int> st = {};
        set<int> st2 = {};
        rep(j,9){
            st.insert(s[i][j]);
            st2.insert(s[j][i]);
        }
        if(st.size() != 9 || st2.size() != 9){
            cout << "No" << endl;
            return 0;
        }
    }
    rep(i,3){
        rep(j,3){
            set<int> st = {};
            rep(k,3){
                rep(l,3){
                    st.insert(s[i*3+k][j*3+l]);
                }
            }
            if(st.size() != 9){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl; // 正しい数独であることを示すメッセージ

}

// #include <bits/stdc++.h>
// #define rep(i, n) for (int i=0; i<(n); i++)
// using namespace std;

// int main(){
//     vector<string> s(9);
//     rep(i,9){
//         set<int> mp;
//         cin >> s[i];
//         rep(j,9){
//             mp.insert(s[i][j] - '0');
//         }
//         if(mp.size() != 9){
//             cout << "No" << endl;
//             return 0;
//         }
//     }
//     rep(i,9){
//         set<int> mp;
//         rep(j,9){
//             mp.insert(s[j][i] - '0');
//         }
//         if(mp.size() != 9){
//             cout << "No" << endl;
//             return 0;
//         }
//     }
//     rep(i,3){
//         rep(j,3){
//             set<int> mp;
//             rep(k,3){
//                 rep(l,3){
//                     mp.insert(s[i*3+k][j*3+l] - '0');
//                 }
//             }
//             if(mp.size() != 9){
//                 cout << "No" << endl;
//                 return 0;
//             }
//         }
//     }

//     cout << "Yes" << endl; // 正しい数独であることを示すメッセージ
//     return 0;
// }