#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	bool cards[4][13+1] = {false};
	string mark_string = "SHCD";
	for (int i = 0; i < n; ++i) {
		char mark;
		int mark_index, number;
		cin >> mark >> number;

		for (int j = 0; j < 4; ++j) {
			if (mark == mark_string[j]) {
				mark_index = j;
				break;
			}
		}
		cards[mark_index][number] = true;
	}

	for (int i = 0; i < 4; ++i) {
		for (int j = 1; j <= 13; ++j) {
			if (cards[i][j] == false) {
				cout << mark_string[i] << " " << j << endl;
			}
		}
	}

	return 0;
}




// #include <iostream>
// #include <string>


// int main() {
//     int n;
//     std::cin >> n;
    
//     bool cards[4][13+1] = {false};
//     std::string mark_string = "SHCD";
//     for(int i=0; i<n; ++i) {
//         char mark;
//         int mark_index, number;
//         std::cin >> mark >> number;

//         for(int j=0; j<4; j++) {
//             if(mark == mark_string[j]) {
//                 mark_index = j;
//                 break;
//             }
//         }
//         cards[mark_index][number] = true;
//     }

//     for(int i=0; i<4; i++) {
//         for(int j=0; j<13; j++) {
//             if(cards[i][j] == false) {
//                 std::cout << mark_string[i] << " " << j+1 << std::endl;
//             }
//         }
//     }
//     return 0;
// }


