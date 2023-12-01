#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

struct UnionFind {
    vector<int> parent, size;

    UnionFind(int n) : parent(n, -1), size(n, 1) {}

    int root(int x) {
        if(parent[x] == -1) return x;
        return parent[x] = root(parent[x]);
    }

    bool isSame(int x, int y) {
        return root(x) == root(y);
    }

    void merge(int x, int y) {
        int rootX = root(x);
        int rootY = root(y);

        if (rootX == rootY) return;

        if (size[rootX] < size[rootY]) swap(rootX, rootY);

        parent[rootY] = rootX;
        size[rootX] += size[rootY];
    }

    int getSize(int x) {
        return size[root(x)];
    }
};

int main(){
    int n, m;
    cin >> n >> m;
    UnionFind uf(n);
    // vector<vector<int>> (n, )
    map<int, vector<int>> mp;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        mp[a].push_back(b);
        mp[b].push_back(a);
        uf.merge(a,b);
    }
    int haji = 0, middle = 0, target_middle = n - 2;
    for(int i = 0; i < n; i++){
        int jiten = mp[i].size();
        // cout << jiten << endl;
        if(jiten > 2){
            cout << "No" << endl;
            return 0;
        }else if(jiten == 1) haji++;
        else if(jiten == 2) middle++;
        else{
            if(n != 1) cout << "No" << endl;
            else cout << "Yes" << endl;
            return 0;
        }
    }
    if(haji == 2 && middle == target_middle && uf.getSize(0) == n) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}