#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a < b && a < c && b < c) {
        std::cout << "Yes\n";
    }else{
        std::cout << "No\n";
    }
}