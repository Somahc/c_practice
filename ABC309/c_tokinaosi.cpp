#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> p(N);

    for(int i=0; i<N; i++) {
        cin >> p[i].first >> p[i].second;
    }

    sort(p.begin(), p.end());  //pの1つ目の要素で昇順にソート

    long long sum = 0;

    for(int i=0; i<N; i++) {
        sum += p[i].second;  //飲む薬の総数をsumに代入
    }

    if(sum<=K) cout << "1" << endl;  //初めの段階で飲む薬の数がKをしたまわっているなら１を返す
    else {
        for(int i=0; i<p.size(); i++) {  
            if(sum<=K) {
                cout << p[i-1].first + 1 << endl;
                return 0;  //途中でsumがKを下回ったら終了
            }
            sum -= p[i].second;  //p[i]の2番目（ai日目に飲む薬の数）の値をsumから引く
        }
        cout << p.back().first + 1 << endl;  //途中でsumがKを下回らなかったら一番長い期間飲まなければいけない薬の日数に+1した数が答え
    }
}