#include <iostream>
#include <iomanip>

int main() {
    double r;
    std::cin >> r;
    double s, c;
    double PI = 3.141592653589;

    s = r * r * PI;
    c = 2 * r * PI;

    std::cout << std::fixed << std::setprecision(6);

    std::cout << s << " " << c << std::endl;
}