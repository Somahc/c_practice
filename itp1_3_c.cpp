#include <iostream>

int main() {
    while(true) {
        int x, y;
        std::cin >> x >> y;
        if (x>y) {
            int t;
            t = x;
            x = y;
            y = t;
        }

        if(x==0 && y==0) {
            break;
        }
        
        std::cout << x << " " << y << "\n";
    }
}