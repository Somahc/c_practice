# include <algorithm>
# include <bitset>
# include <cassert>
# include <cctype>
# include <cfloat>
# include <climits>
# include <cmath>
# include <cstdio>
# include <deque>
# include <iomanip>
# include <iostream>
# include <list>
# include <map>
# include <queue>
# include <random>
# include <set>
# include <stack>
# include <string>
# include <unordered_set>
# include <vector>
# include <sstream>
using namespace std;

using ll = long long;

int main(int argc, char *argv[]) {

  long long n;
  int m;

  cin >> n >> m;

  vector<pair<long long, long long>> available_group_min_and_max;
  vector<long long> reserved_time;

  for(int i = 0; i < m; i++) {
    int reserved;
    long long min, max;

    cin >> reserved;
    reserved--;

    reserved_time.push_back(reserved);

    if (reserved_time.size() == 1) {
      min = 0;
      max = reserved - 1;
      if (max < 0) max = 0;
      available_group_min_and_max.push_back({min, max});
    } else if (reserved_time[reserved_time.size() - 2] + 1 == reserved_time.back()) {
      // 連続しているならグループなしでスキップ
      continue;
    } else {
      min = reserved_time[reserved_time.size() - 2] + 1;
      max = reserved - 1;
      available_group_min_and_max.push_back({min, max});
    }

      // available_group_min_and_max.push_back({min, max});
  }

  int q;
  cin >> q;

  for(int i = 0; i < q; i++) {
    bool isFoundAvailable = false;
    long long l, r;
    cin >> l >> r;
    l--;
    r--;

    // 10^12
    // for(long long j = l; j <= r; j++) {
    //   if (!reserved_time.count(j)) {
    //     isFoundAvailable = true;
    //     long long available;
    //     available = j;
    //     available++;
    //     cout << available << '\n';
    //   }
    // }

    for (int j = 0; j < m; j++) {
      if (available_group_min_and_max[j].first >= l && available_group_min_and_max[j].second <= r) {
        cout << available_group_min_and_max[j].first + 1 << '\n';
        isFoundAvailable = true;
        break;
      }
    }

    if (!isFoundAvailable) cout << "-1" << '\n';
  }

  return 0;
}

/*
## 基本方針
※実装は与えられる数値を0-indexedに直して行いましたが、以下説明では1-indexedとして行います。
連続している空いている時間枠のうち、最小の枠と最大の枠の組をavailable_group_min_and_maxに格納していき、available_group_min_and_maxに格納されている組の中で.firstで取得できる要素がl以上かつ、.secondで取得できる要素がr以下の時、.firstの要素を出力するという方針で実装しました。

たとえば、時間枠が1~10まで用意されていて、そのうち3,4,6,7,8が利用不可の時、利用できる時間枠は1,2,5,9,10であるため、available_group_min_and_maxに格納される、連続している利用可能時間枠は以下のようになります
{1,2}
{5,5}
{9,10}

このうち例えばl=3, r=7であれば、「.firstで取得できる要素がl以上かつ、.secondで取得できる要素がr以下の時」を満たす最小のものは「{5, 5}」であるため、.firstである5が出力されます。

available_group_min_and_maxのサイズは最大でもm/2であるため、最大10^5あるクエリのループのの中に入れても計算量が大きくなりすぎないはずでしたが、実装が間に合いませんでした。
*/