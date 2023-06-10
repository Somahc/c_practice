#include <iostream>

int main() {
    int m, n;
    m = 2;
    n = 3;
    double **arr;

    arr = new double*[m];

    for (int i=0; i<10; i++) {
        arr[i] = new double[n];
    }

    std::cout << "aaa";

    for(int i=0; i<m; i++) {
        delete[] arr[i];
    }

    delete[] arr;
}