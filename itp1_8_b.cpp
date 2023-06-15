#include <iostream>
#include <string>
using namespace std;

int main() {
    while(true) {
        string numbers;
        int sum = 0;
        cin >> numbers;

        if (numbers[0] - '0' == 0) {
            break;
        }

        for (int i=0; i < numbers.size(); i++) {
            sum += numbers[i] - '0';    
        }
        cout << sum << endl;

    }
}