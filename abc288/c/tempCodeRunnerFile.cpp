#include <bits/stdc++.h>
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
    int n, m,ans=0;
    cin >> n >> m;
    UnionFind uf(n);


    rep(i,m){
        int a, b;
        cin >> a >> b;
        if(uf.root(a) == uf.root(b)){
            ans++;
            // uf.merge(a,b);
        }else{
            uf.merge(a,b);
        }
    }
    cout << ans << endl;
}
