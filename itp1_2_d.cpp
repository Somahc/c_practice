#include <iostream>

int main() {
    int w, h, x, y, r;
    std::cin >> w >> h >> x >> y >> r;

    if (0 <= (x-r) and (x+r) <= w and 0 <= (y-r) and (y+r) <= h) {
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;

    }

    // bool isYoko, isTate;
    // isYoko = isTate = false;

    // if (0<x-r && w>x+r) {
    //     isYoko = true;
    // }
    // if (0<y-r && h>y+r) {
    //     isTate = true;
    // }

    // if(isYoko && isTate) {
    //     std::cout << "Yes" << "\n";
    // } else {
    //     std::cout << "No" << "\n";
    // }
}