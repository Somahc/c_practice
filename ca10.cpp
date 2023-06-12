#include <iostream>
using namespace std;

void swap(int *px, int *py);

int main(int argc, char* argv[]) {
    int x = 10;
    int y = 20;

    cout << "[交換前]\n";
    cout << "x=" << x << ", y=" << y << endl;

    swap(&x, &y);

    cout << "[交換後]\n";
    cout << "x=" << x << ", y=" << y << endl;

    return 0;
}

void swap(int *px, int *py) {
    int tmp;
    tmp = *px;
    *px = *py;
    *py = tmp;
}