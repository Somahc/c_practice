#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int m,d;
    cin >> m >> d;
    int y_dash,m_dash,d_dash;
    cin >> y_dash >> m_dash >> d_dash;
    if(d_dash+1 > d){
        d_dash = 1;
        m_dash++;
        // if(m_dash > m){
        //     m_dash = 1;
        //     y_dash++;
        // }
    }else{
        d_dash++;
    }
    if(m_dash > m){
            m_dash = 1;
            y_dash++;
        }
    cout << y_dash << " " << m_dash << " " << d_dash << endl;
    return 0;
}