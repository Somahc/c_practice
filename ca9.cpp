#include <iostream>
using namespace std;

void swap(int x, int y);

int main() {
    int x = 10;
    int y = 20;
    cout << "[交換前]\n";
    cout << "x=" << x << ", y=" << y << endl;
    cout << "[アドレス]\n";
    cout << "x=" << &x << ", y=" << &y << endl;

    swap(x, y);

    cout << "[交換後]\n";
    cout << "x=" << x << ", y=" << y << endl;
    cout << "[アドレス]\n";
    cout << "x=" << &x << ", y=" << &y << endl;
    return 0;
}

void swap(int x, int y) {
    cout << "[swap交換前]\n";
    cout << "x=" << x << ", y=" << y << endl;
    cout << "[アドレス]\n";
    cout << "x=" << &x << ", y=" << &y << endl;

    int tmp;
    tmp = x;
    x = y;
    y = tmp;

    cout << "[swap交換後]\n";
    cout << "x=" << x << ", y=" << y << endl;
    cout << "[アドレス]\n";
    cout << "x=" << &x << ", y=" << &y << endl;
}