#include <iostream>

int main() {
    int a, b, d, r;
    float f;

    std::cin >> a >> b;
    d = a/b;
    r = a%b;
    f = a/b;

    std::cout << d << r << f;
}