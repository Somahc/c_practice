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
using ll = long long int;

struct UploadFile {
    string timestamp;
    string storage_type;
    string filename;
    long long int file_size;
};

struct DeleteFile {
    string timestamp;
    string storage_type;
    string filename;
};

struct UsageStats {
    long long int storage_a1_usage = 0;
    long long int storage_a2_usage = 0;
    long long int max_storage_a1_size = 0;
    long long int max_storage_a2_size = 0;
    long long int storage_a1_update_usage = 0;
    long long int storage_a2_update_usage = 0;
    long long int storage_a1_usage_fee = 0;
    long long int storage_a2_usage_fee = 0;
    long long int storage_a1_update_fee = 0;
    long long int storage_a2_update_fee = 0;
    // long long storage_fee = 0;
    // long long update_fee = 0;
    // long long usage_fee = 0;
};

const int INT_SCALE = 1000000;

string get_month_key(const string& timestamp) {
    return timestamp.substr(0, 7); // "2022-04"
}

string get_previous_month_key(const string& month_key) {
    int year = stoi(month_key.substr(0, 4));
    int month = stoi(month_key.substr(5, 2));

    if (month == 1) {
        year -= 1;
        month = 12;
    } else {
        month -= 1;
    }

    char buf[8];
    sprintf(buf, "%04d-%02d", year, month);
    return string(buf);
}


long long int convert_kb_to_mb(long long int kb) {
    return static_cast<long long int>((kb + 999) / 1000);
}

long long int calculate_storage_fee(long long mb, int multiplier_per_million) {
    long long raw_fee = mb * multiplier_per_million;
    return static_cast<long long int>((raw_fee + 999999) / INT_SCALE); // 小数点以下切り上げ
}



long long int calculate_update_fee(long long mb, int multiplier_per_million) {
    long long raw_fee = mb * multiplier_per_million;
    return static_cast<long long int>((raw_fee + 999999) / INT_SCALE); // 切り上げ
}

class FreePlanManager {
    private:
        const int ON_SAVE_A1_MULTIPLIER = 0.01 * INT_SCALE;
        const int ON_UPDATE_A1_MULTIPLIER = 0.0005 * INT_SCALE;
        const int ON_SAVE_A2_MULTIPLIER = 0.001 * INT_SCALE;
        const int ON_UPDATE_A2_MULTIPLIER = 0.01 * INT_SCALE;
        map<string, UsageStats> usage_by_month;

        vector<UploadFile> stored_files;

    public:
        void upload_file(const UploadFile& file) {
            // アップロード処理の実装
            // ストレージタイプに応じて、ファイルサイズを加算する

            if (file.storage_type == "storage_B1" || file.storage_type == "storage_B2") {
                cout << "UPLOAD: this storage location is not available on the free plan" << "\n";
                return;
            }

            string month = get_month_key(file.timestamp);
            ll target_file_size = convert_kb_to_mb(file.file_size);


            if (file.storage_type == "storage_A1") {
                ll upload_cost;
                // storage_a1にすでにその名前のファイルがある場合は出力する
                for (const auto& f : stored_files) {
                    if (f.storage_type == "storage_A1" && f.filename == file.filename) {
                        cout << "UPLOAD: file already exists" << "\n";
                        return;
                    }
                }

                ll uploaded_a1_size = usage_by_month[month].storage_a1_usage + target_file_size;
                ll updated_a1_size = usage_by_month[month].storage_a1_update_usage + target_file_size;
                
                // リクエスト実行後に利用金額が0円を超える場合
                if (calculate_monthly_price("storage_A1", month, uploaded_a1_size, updated_a1_size) > 0) {
                    cout << "UPLOAD: free plan fee limit exceeded" << "\n";
                    return;
                }

                // ファイルを保存
                stored_files.push_back(file);
                usage_by_month[month].storage_a1_usage += target_file_size;
                usage_by_month[month].max_storage_a1_size += max(usage_by_month[month].storage_a1_usage, usage_by_month[month].max_storage_a1_size);
                usage_by_month[month].storage_a1_update_usage += target_file_size;

                ll current_storage_fee = calculate_storage_fee(usage_by_month[month].storage_a1_usage, ON_SAVE_A1_MULTIPLIER);
                ll current_update_fee = calculate_update_fee(usage_by_month[month].storage_a1_update_usage, ON_UPDATE_A1_MULTIPLIER);
                ll current_monthly_price = calculate_monthly_price("storage_A1", month, usage_by_month[month].storage_a1_usage, usage_by_month[month].storage_a1_update_usage);

                usage_by_month[month].storage_a1_usage_fee = current_storage_fee;
                usage_by_month[month].storage_a1_update_fee += current_update_fee;

                // cout << "[debug]" << " month: " << month << "\n";
                // cout << "[debug]" << " target_file_size: " << target_file_size << "\n";
                // cout << "[debug]" << " storage_a1_usage: " << usage_by_month[month].storage_a1_usage << "\n";
                // cout << "[debug]" << " storage_a1_update_usage: " << usage_by_month[month].storage_a1_update_usage << "\n";
                // cout << "[debug]" << " max_storage_a1_size: " << usage_by_month[month].max_storage_a1_size << "\n";
                // cout << "[debug]" << " current_storage_fee: " << current_storage_fee << "\n";
                // cout << "[debug]" << " current_update_fee: " << current_update_fee << "\n";
                // cout << "[debug]" << " current_monthly_price: " << current_monthly_price << "\n";

                cout << "UPLOAD: " << usage_by_month[month].storage_a1_usage_fee + usage_by_month[month].storage_a2_usage_fee << " " << usage_by_month[month].storage_a1_update_fee + usage_by_month[month].storage_a2_update_fee << " " << current_monthly_price << "\n";

                return;
            }
            
            if (file.storage_type == "storage_A2") {
                ll upload_cost;
                // storage_a1にすでにその名前のファイルがある場合は出力する
                for (const auto& f : stored_files) {
                    if (f.storage_type == "storage_A2" && f.filename == file.filename) {
                        cout << "UPLOAD: file already exists" << "\n";
                        return;
                    }
                }

                ll uploaded_a2_size = usage_by_month[month].storage_a1_usage + target_file_size;

               // リクエスト実行後に利用金額が0円を超える場合
                if (calculate_monthly_price("storage_A2", month, uploaded_a2_size, usage_by_month[month].storage_a2_update_usage) > 0) {
                    cout << "UPLOAD: free plan fee limit exceeded" << "\n";
                    return;
                }

                // ファイルを保存
                stored_files.push_back(file);
                usage_by_month[month].storage_a2_usage += target_file_size;
                // usage_by_month[month].max_storage_a2_size += target_file_size;
                usage_by_month[month].max_storage_a2_size += max(usage_by_month[month].storage_a2_usage, usage_by_month[month].max_storage_a2_size);
                usage_by_month[month].storage_a2_update_usage += target_file_size;

                ll current_storage_fee = calculate_storage_fee(usage_by_month[month].storage_a2_usage, ON_SAVE_A2_MULTIPLIER);
                ll current_update_fee = calculate_update_fee(usage_by_month[month].storage_a2_update_usage, ON_UPDATE_A2_MULTIPLIER);
                ll current_monthly_price = calculate_monthly_price("storage_A2", month, usage_by_month[month].storage_a2_usage, usage_by_month[month].storage_a2_update_usage);

                usage_by_month[month].storage_a2_usage_fee = current_storage_fee;
                usage_by_month[month].storage_a2_update_fee += current_update_fee;

                // cout << "[debug]" << "storage_a1_usage_fee" << usage_by_month[month].storage_a1_usage_fee << "\n";

                cout << "UPLOAD: " << usage_by_month[month].storage_a1_usage_fee + usage_by_month[month].storage_a2_usage_fee << " " << usage_by_month[month].storage_a1_update_fee + usage_by_month[month].storage_a2_update_fee << " " << current_monthly_price << "\n";

                return;

            }
        }

        void delete_file(const DeleteFile& file) {
            if (file.storage_type == "storage_B1" || file.storage_type == "storage_B2") {
                cout << "DELETE: this storage location is not available on the free plan" << "\n";
                return;
            }

            string month = get_month_key(file.timestamp);

            // 対象のファイルがない場合
            auto it = find_if(stored_files.begin(), stored_files.end(),
                [&](const UploadFile& f) { return f.storage_type == file.storage_type && f.filename == file.filename; });

            if (it == stored_files.end()) {
                cout << "DELETE: file does not exist" << "\n";
                return;
            }

            // 対象のファイルを削除するとその月の料金が0円を超える場合
            ll target_file_size = convert_kb_to_mb(it->file_size);
            if (file.storage_type == "storage_A1") {
                ll remaining_storage_a1_size = usage_by_month[month].storage_a1_usage - target_file_size;
                ll deleted_update_usage = usage_by_month[month].storage_a1_update_usage + target_file_size;
                if (calculate_monthly_price("storage_A1", month, remaining_storage_a1_size, deleted_update_usage) > 0) {
                    cout << "DELETE: free plan fee limit exceeded" << "\n";
                    return;
                }

                // 対象のファイルを削除
                usage_by_month[month].storage_a1_usage -= target_file_size;
                usage_by_month[month].storage_a1_update_usage += target_file_size;
                stored_files.erase(it);
                
                // int current_update_fee = calculate_update_fee(usage_by_month[month].storage_a1_update_usage, ON_UPDATE_A1_MULTIPLIER);
                ll this_update_fee = calculate_update_fee(target_file_size, ON_UPDATE_A1_MULTIPLIER);
                ll current_monthly_price = calculate_monthly_price("storage_A1", month, usage_by_month[month].storage_a1_usage, usage_by_month[month].storage_a1_update_usage);

                usage_by_month[month].storage_a1_update_fee += this_update_fee;

                cout << "DELETE: " << usage_by_month[month].storage_a1_usage_fee + usage_by_month[month].storage_a2_usage_fee << " " << usage_by_month[month].storage_a1_update_fee + usage_by_month[month].storage_a2_update_fee << " " << current_monthly_price << "\n";

                return;
                
            } else if (file.storage_type == "storage_A2") {
                ll remaining_storage_a2_size = usage_by_month[month].storage_a2_usage - target_file_size;
                ll deleted_update_usage = usage_by_month[month].storage_a2_update_usage + target_file_size;
                if (calculate_monthly_price("storage_A2", month, remaining_storage_a2_size, deleted_update_usage) > 0) {
                    cout << "DELETE: free plan fee limit exceeded" << "\n";
                    return;
                }

                // 対象のファイルを削除
                usage_by_month[month].storage_a2_usage -= target_file_size;
                usage_by_month[month].storage_a2_update_usage += target_file_size;
                stored_files.erase(it);

                ll current_storage_fee = calculate_storage_fee(usage_by_month[month].storage_a2_usage, ON_SAVE_A2_MULTIPLIER);
                // int current_update_fee = calculate_update_fee(usage_by_month[month].storage_a2_update_usage, ON_UPDATE_A2_MULTIPLIER);
                ll this_update_fee = calculate_update_fee(target_file_size, ON_UPDATE_A2_MULTIPLIER);
                ll current_monthly_price = calculate_monthly_price("storage_A2", month, usage_by_month[month].storage_a2_usage, usage_by_month[month].storage_a2_update_usage);

                cout << "DELETE: " << usage_by_month[month].storage_a1_usage_fee + usage_by_month[month].storage_a2_usage_fee << " " << usage_by_month[month].storage_a1_update_fee + usage_by_month[month].storage_a2_update_fee << " " << current_monthly_price << "\n";

                return;
            }


        }

        void update_file() {}

        void print_last_month_price(const string& month) {
            string target_month = get_month_key(month); // 月のキーを取得
            target_month = get_previous_month_key(target_month); // 前月のキーを取得

            if (usage_by_month.find(target_month) == usage_by_month.end()) {
                cout << "CALC: [0 0 0 0] 0 0 0" << "\n";
                return;
            }

            const UsageStats& stats = usage_by_month[target_month];

            ll storage_a1_usage = stats.storage_a1_usage;
            ll storage_a2_usage = stats.storage_a2_usage;
            int storage_b1_usage = 0; // FreeプランではB1は使用しない
            int storage_b2_usage = 0; // FreeプランではB2は使用しない
            int storage_a1_usage_fee = stats.storage_a1_usage_fee;
            int storage_a2_usage_fee = stats.storage_a2_usage_fee;
            int storage_a1_update_fee = stats.storage_a1_update_fee;
            int storage_a2_update_fee = stats.storage_a2_update_fee;

            int total_usage_fee = storage_a1_usage_fee + storage_a2_usage_fee;
            int total_update_fee = storage_a1_update_fee + storage_a2_update_fee;
            int total_monthly_price = 0; // 月額料金は0円

            cout << "CALC: [" 
                << storage_a1_usage << " " 
                << storage_a2_usage << " " 
                << storage_b1_usage << " " 
                << storage_b2_usage << "] "
                << total_usage_fee << " "
                << total_update_fee << " "
                << total_monthly_price << "\n";
        }


        int calculate_monthly_price(const string& storage_type, const string& month, const ll& storage_used, const ll& update_usage) {
            int storage_fee = 0;
            int update_fee = 0;

            ll max_storage_used;
            if (storage_type == "storage_A1") {
                max_storage_used = max(usage_by_month[month].max_storage_a1_size, storage_used);
            } else if (storage_type == "storage_A2") {
                max_storage_used = max(usage_by_month[month].max_storage_a2_size, storage_used);
            }

            storage_fee += calculate_storage_fee(max_storage_used, 
                (storage_type == "storage_A1") ? ON_SAVE_A1_MULTIPLIER : ON_SAVE_A2_MULTIPLIER);

            update_fee += calculate_update_fee(update_usage,
                (storage_type == "storage_A1") ? ON_UPDATE_A1_MULTIPLIER : ON_UPDATE_A2_MULTIPLIER);

            return max(0, storage_fee + update_fee - 1000);
        }
    
};

int main(int argc, char *argv[]) {
    string line;
    FreePlanManager free_plan_manager;

    while (!cin.eof()) {
        getline(cin, line);
        stringstream ss(line);
        string timestamp, query_type;
        ss >> timestamp >> query_type;

        if (query_type == "UPLOAD") {

            string storage_type, file_name;
            long long int file_size;
            ss >> storage_type >> file_name >> file_size;

            free_plan_manager.upload_file({timestamp, storage_type, file_name, file_size});

        } else if (query_type == "DELETE") {

            string storage_type, file_name;
            ss >> storage_type >> file_name;

            free_plan_manager.delete_file({timestamp, storage_type, file_name});

        } else if (query_type == "UPDATE") {
            
        } else if (query_type == "CALC") {
            free_plan_manager.print_last_month_price(timestamp);

        }

    }
    return 0;
}

// 2022-04-03T12:30 UPLOAD storage_A1 filex 2000000
// 2022-04-05T12:30 DELETE storage_B2 targetfile
// 2022-04-06T12:30 UPLOAD storage_A2 filey 5
// 2022-04-06T12:31 UPLOAD storage_A1 filez 2000000000
// 2022-04-10T12:30 DELETE storage_A1 filex
// 2022-04-15T12:30 DELETE storage_A2 filey
// 2022-05-01T00:00 CALC
// 2022-06-01T00:00 CALC