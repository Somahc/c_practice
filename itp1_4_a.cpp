#include <iostream>
#include <iomanip>

int main() {
    int a, b, d, r;
    double f;

    std::cin >> a >> b;
    d = a/b;
    r = a%b;
    f = 1.0*a/b;

    std::cout << d << " " << r << " ";
    std::cout << std::fixed << std::setprecision(5);
    std::cout << f << "\n";
}