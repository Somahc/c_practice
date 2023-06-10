#include <iostream>

int main() {
    int x, hour, min, sec;

    std::cin >> x;
    hour = x/3600;
    min = x%3600/60;
    sec = x - 3600*hour - 60*min;
    std::cout << hour << ":" << min << ":" << sec << "\n";
}