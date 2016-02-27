#include "../std_lib_facilities.h"

int main() {

    string s1;
    string s2;

    while (true) {
        cout << "Provide two integers" << endl;
        cin >> s1 >> s2;
        if (s1 == "|" || s2 == "'") break; 
        cout << s1 << '\t' << s2 << endl;
    }
    return 0;
}
