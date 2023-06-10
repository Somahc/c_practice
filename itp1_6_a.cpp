#include <iostream>

int main() {
    int n;
    std::cin >> n;
    double *arr;

    
    arr = new double[n];

    for(int i=0; i<n; i++) {
        int input;
        std::cin >> input;
        arr[i] = input;
    }

    for(int i=n-1; i >= 0; i--) {
        std::cout << arr[i];
        if(i != 0) {
            std::cout << " ";
        }
    }

    std::cout << std::endl;
}