#include <iostream>

using std::cout;
using std::cin;

double calc() {
    double a1;
    double a2;
    char o;

    cin >> a1 >> o >> a2;

    switch (o) {
        case '+':
            return a1 + a2;
        case '-':
            return a1 - a2;
        case '*':
            return a1 * a2;
        case '/':
            return a1 / a2;
        default:
            return - 999;
    }
}

int main() {

    cout << "Simple calculator\n" 
        << "Enter a number operator and second number\n";

    while (true) {
       cout << calc() << '\n'; 
    }

    return 0;
}
