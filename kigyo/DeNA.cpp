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
# include <unordered_map>
# include <vector>
# include <sstream>
using namespace std;

struct MenuInformation {
    int dishId;
    int initialStock;
    int price;
};

struct Order {
    int tableId;
    int dishId;
    int quantity;
};

class MenuManager {
    private:
        unordered_map<int, MenuInformation> menuMap; // dishId -> MenuInformation
        unordered_map<int, int> currentStock;        // dishId -> remaining stock
        vector<Order> orderHistory;

    public:
        // メニュー初期化
        void addMenu(const MenuInformation& menu) {
            menuMap[menu.dishId] = menu;
            currentStock[menu.dishId] = menu.initialStock;
        }

        // 注文処理
        bool processOrder(int seatId, int dishId, int quantity) {
            if (currentStock[dishId] >= quantity) {
                currentStock[dishId] -= quantity;
                orderHistory.push_back({seatId, dishId, quantity});
                return true;
            } else {
                // orderHistory.push_back({seatId, dishId, quantity, false});
                return false;
            }
        }

};

// queue<pair<int, int>> waitingOrders;
int maxMicrowave = 0;
vector<pair<int, int>> cookingList; // {dishId, tableId}
deque<pair<int, int>> cookingDishes;   // {dishId, tableId}
queue<pair<int, int>> waitingDishes;   // {dishId, tableId}


void receiveOrder(int tableId, int dishId) {
    if ((int)cookingDishes.size() < maxMicrowave) {
        cookingDishes.emplace_back(dishId, tableId);
        cout << dishId << "\n";
    } else {
        waitingDishes.emplace(dishId, tableId);
        cout << "wait" << "\n";
    }
}


void completeDish(int dishId) {
    const int targetId = dishId;

    // dishIdが調理中のリストに存在するか確認
    auto it = find_if(cookingDishes.begin(), cookingDishes.end(),
                      [&](const pair<int, int>& p) {
                          return p.first == targetId;
                      });

    if (it == cookingDishes.end()) {
        cout << "unexpected input" << endl;
        return;
    }

    cookingDishes.erase(it);
    cout << "ok" << endl;

    // 次の注文を調理開始
    if (!waitingDishes.empty()) {
        auto [nextDishId, nextTableId] = waitingDishes.front();
        waitingDishes.pop();
        cookingDishes.emplace_back(nextDishId, nextTableId);
        cout << nextDishId << "\n";
    }
}


int main(int argc, char *argv[]) {
    MenuManager manager;

    string line;
    int index = 0;
    while (!cin.eof()) {
        int step_num;
        cin >> step_num;
        if (step_num == 1) {
            int menu_kinds;
            cin >> menu_kinds;

            for(int i = 0; i < menu_kinds; i++) {
                int dish_id, stock, price;
                cin >> dish_id >> stock >> price;
                manager.addMenu({dish_id, stock, price});
            }

            string line;
            cin.ignore(); // 改行を読み飛ばす

            while (getline(cin, line)) {
                if (line.empty()) continue; // 空行はスキップ

                stringstream ss(line);
                string ord;
                int table_id, dish_id, quantity;

                ss >> ord >> table_id >> dish_id >> quantity;

                if (ord != "order") continue;

                bool accepted = manager.processOrder(table_id, dish_id, quantity);
                if (accepted) {
                    for (int i = 0; i < quantity; i++) {
                        cout << "received order " << table_id << " " << dish_id << '\n';
                    }
                } else {
                    cout << "sold out " << table_id << '\n';
                }
            }
        } else if (step_num == 2) {
            int menu_kinds, microwave_count;
            cin >> menu_kinds >> microwave_count;
            maxMicrowave = microwave_count;

            for(int i = 0; i < menu_kinds; i++) {
                int dish_id, stock, price;
                cin >> dish_id >> stock >> price;
                manager.addMenu({dish_id, stock, price});
            }

            string line;
            cin.ignore(); // 改行を読み飛ばす

            while (getline(cin, line)) {
                if (line.empty()) continue; // 空行はスキップ

                stringstream ss(line);
                string word1, word2;
                ss >> word1 >> word2;

                if (word1 == "received" && word2 == "order") {
                    int table_id, dish_id;
                    ss >> table_id >> dish_id;
                    receiveOrder(table_id, dish_id);

                } else if (word1 == "complete") {
                    int dish_id = stoi(word2);
                    completeDish(dish_id);

                }
            }
        }
    }
    return 0;
  }