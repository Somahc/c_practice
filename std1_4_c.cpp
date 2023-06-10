#include <iostream>

int main() {
    int a, b, result;
    char op;
    while(true) {
        std::cin >> a >> op >> b;
        if(op == '+') {
            result = a  + b;
        }else if(op == '-') {
            result = a - b;
        }else if(op == '*') {
            result = a * b;
        }else if(op == '/') {
            result = a / b;
        }else if(op == '?') {
            break;
        }
        std::cout << result << std::endl;
    }
}