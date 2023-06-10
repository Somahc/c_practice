#include <iostream>

int main() {
    int x, y, z;
    std::cin >> x >> y >> z;
    if (x>y) {
        int t = x;
        x = y;
        y = t;
    }
    if (y>z) {
        int t = y;
        y = z;
        z = t;
    }
    if (x>y) {
        int t = x;
        x = y;
        y = t;
    }

    std::cout << x << " " << y << " " << z << "\n";
}