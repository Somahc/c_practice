#include <iostream>

int main() {
    int a, b, c, result;
    std::cin >> a >> b >> c;
    result = 0;
    for(int i = a; i<=b; i++) {
        //std::cout << i << "\n";
        if(c % i == 0) {
            result++;
        }
    }
    std::cout << result << "\n";
}