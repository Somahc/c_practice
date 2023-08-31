#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first < b.first;
    }
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> ice(n);

    rep(i, n) {
        cin >> ice[i].first >> ice[i].second;
    }

    sort(ice.begin(), ice.end(), compare_by_b);

    // for(auto i : ice) {
    //     cout << i.first << " " << i.second << endl;
    // }

    int zanteiMax = 0;

    for(int i=1; i<n; i++){
        if(ice[0].first != ice[i].first) {
            int tmp = 0;
            tmp = ice[0].second + ice[i].second;
            if(tmp > zanteiMax) {
                zanteiMax = tmp;
            }
        }else{
            int tmp = 0;
            tmp = ice[0].second + (ice[i].second/2);
            if(tmp > zanteiMax){
                zanteiMax = tmp;
        }
        }
    }

    cout << zanteiMax << endl;
}