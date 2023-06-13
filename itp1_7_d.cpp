#include <iostream>

using namespace std;

int main()
{
	int n, m, l;
	cin >> n >> m >> l;

	int a[n][m], b[m][l];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}
	for (int j = 0; j < m; ++j) {
		for (int k = 0; k < l; ++k) {
			cin >> b[j][k];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int k = 0; k < l; ++k) {
			long long int answer = 0;
			for (int j = 0; j < m; ++j) {
				answer += a[i][j] * b[j][k];
			}
			cout << answer << " \n"[k == l - 1];
		}
	}

	return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int n, m, l;
//     cin >> n >> m >> l;

//     int a[n][m];
//     int b[m][l];
//     int c[n][l] = {0};

//     for(int i=0; i<n; ++i) {
//         for(int j=0; j<m; ++j) {
//             cin >> a[i][j];
//         }
//     }

//     for(int i=0; i<m; ++i) {
//         for(int j=0; j<l; ++j) {
//             cin >> b[m][l];
//         }
//     }

    // for(int i=0; i<n; ++i) {
    //     for(int j=0; j<m; ++j) {
    //         for(int k=0; k<l; ++k) {
    //             c[i][j] += a[i][j] * b[k][j];
    //             cout << "計算:\n" << a[i][j] << "x" << b[k][j] << endl;
    //         }
    //     }
    // }

    // for(int i=0; i<n; ++i) {
    //     for(int j=0; j<l; ++j) {
    //         cout << c[i][j] << " ";
    //     }
    //     cout << endl;
    // }
//  }