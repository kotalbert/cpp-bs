#include "../std_lib_facilities.h"

string encode(int n) {

    if (n>9 || n<0) return "not a digit";
    vector<string> spell = {
    "zero", "one", "two", "three", "four", "five",
    "six", "seven", "eight", "nine"};
    return spell[n];
}

int main() {
    
    while (true) {
    cout << "Enter integer" << endl;
    int n;
    cin >> n;
    cout << encode(n) << endl;
    }

    return 0;
}
