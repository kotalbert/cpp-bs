#include "../std_lib_facilities.h"

int main() {

    int val1;
    int val2;
    cout << "Enter two integers." << endl;
    cin >> val1 >> val2;
    if (val1 == val2) cout << "The numbers are equal" << endl;
    else cout << "The numbers are not equal" << endl;
    return 0;
}
