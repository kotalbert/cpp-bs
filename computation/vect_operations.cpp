#include "../std_lib_facilities.h"

void print_v(vector<int> v) {
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << '\t';
    }
    cout << endl;
}

int main() {

    vector<int> v;
    cout << "pass vector values" << endl;
    while (true) {
        double d;
        cin >> d;
        if (d < 0) break;
        v.push_back(d);
    }
    sort(v.begin(), v.end());
    cout << "printing vector" << endl;
    print_v(v);
    return 0;
}
