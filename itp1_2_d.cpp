#include <iostream>

int main() {
    int w, h, x, y, r;
    std::cin >> w >> h >> x >> y >> r;

    bool isYoko, isTate;
    isYoko = isTate = false;

    if (0<x-r && w>x+r) {
        isYoko = true;
    }
    if (0<y-r && h>y+r) {
        isTate = true;
    }

    if(isYoko && isTate) {
        std::cout << "Yes" << "\n";
    } else {
        std::cout << "No" << "\n";
    }
}