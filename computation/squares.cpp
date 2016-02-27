#include "../std_lib_facilities.h"

typedef unsigned long ulong;

ulong grains(int square) {
    if (square == 1) return 1;
    else return grains(square-1)*2;
}

int main() {

    ulong target;
    ulong so_far = 1;
    int square = 1;

    cout << "Give target value" << endl;
    cin >> target;

    while (grains(square) < target) { 
        cout << square << '\t' << grains(square) << endl;
        ++square;
    }
    cout << "target reached on " << square << endl;

    return 0;
}
