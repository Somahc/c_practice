#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    bool graph[102][102];
    rep(i,m){
        int a;
        cin >> a;
        graph[a][a+1] = true;
        graph[a+1][a] = true;
    }

    stack<int> tmp;
    for(int i = 1; i <= n; i++){
        if(graph[i][i+1] == true && i != n) {
            tmp.push(i);
            // cout << "tmpにPUSH: " << i << endl;
        }
        else if(graph[i][i+1] == false || i == n) {
            tmp.push(i);
            // cout << "tmpにPUSH:d " << i << endl;
            while(!tmp.empty()){
                // cout << "qにPUSH: " << tmp.top() << endl;
                cout << tmp.top() << " ";
                tmp.pop();
            }
        }
    }

    cout << endl;
}
