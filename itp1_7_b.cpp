#include <iostream>
using namespace std;

int main()
{
	int n, x;

	while (1) {
		cin >> n >> x;
		if ((n == 0)&&(x == 0)) {
			break;
		}

		int ans = 0;
		for (int i = 1; i <= n; ++i) {
			for (int j = i + 1; j <= n; ++j) {
				for (int k = j + 1; k <= n; ++k) {
					if (i + j + k == x) {
						++ans;
					}
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}



// int main() {
//     int n, x, count;
//     while(true) {
//         if(n==0 && x==0) {
//             break;
//         }

//         cin >> n >> x;
//         count = 0;
//         for(int i=1; i<=n; i++) {
//             for(int j=1; j<=n; j++) {
//                 for(int k=1; k<=n; k++) {
//                     if(i+j+k == x) {
//                         ++count;
//                     }
//                 }
//             }
//         }
//         cout << count << endl;
//     }

// }