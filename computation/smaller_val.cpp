#include "../std_lib_facilities.h"

int main() {

    int val1;
    int val2;
    cout << "Enter two integers." << endl;
    cin >> val1 >> val2;
    cout << "The smaller value is " << min(val1, val2) << endl;
    cout << "The larger value is " << max(val1, val2) << endl;
    return 0;

}
