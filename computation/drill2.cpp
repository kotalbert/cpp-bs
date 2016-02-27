#include "../std_lib_facilities.h"

double str_to_double(string s);
void process_vals(double v1, double v2);

int main() {

    string s;
    double small = 0;
    double large = 0;

    while (true) {
        cout << "Provide a value" << endl;
        cin >> s;
        if (s == "|") break; 
        try {
            double v = str_to_double(s);
            if (v > large) {
                small = large;
                large = v;
            }
            else {
                small = v;
            }
            process_vals(small, large);
        } 
        catch (exception& e) {
            cout << "Invalid value " << e.what() << endl;
            continue;
        };

    }

    return 0;

}

double str_to_double(string s) {
    return stod(s);
}

void process_vals(int v1, int v2) {
    cout << v1 << '\t' << v2 << endl;
    if (v1 == v2) cout << "The values are equal" << endl;
    else {
        cout << "The larger value: " << max(v1, v2) << endl;
        cout << "The smaller value: " << min(v1, v2) << endl;
    }

}

void process_vals(double v1, double v2) {
    cout << v1 << '\t' << v2 << endl;
    if (v1 == v2) cout << "The values are equal" << endl;
    else {
        cout << "The larger value: " << max(v1, v2) << endl;
        cout << "The smaller value: " << min(v1, v2) << endl;
    }

}
