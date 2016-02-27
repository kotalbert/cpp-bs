#include "../std_lib_facilities.h"

double str_to_double(string s);
void process_vals(double v1, double v2);
double convert(double v, string unit);

int main() {

    double val;
    string unit;

    double small = 0;
    double large = 0;

    while (true) {
        cout << "Provide a value" << endl;
        cin >> val >> unit;
        val = convert(val, unit);
        if (val > large) {
            small = large;
            large = val;
        }
        else {
            small = val;
        }
        process_vals(small, large);
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

const double cm_in_in = 2.54;
const double cm_in_m = 100;
const double cm_in_ft = 12*cm_in_in;

double convert(double v, string unit) {
    if (unit == "cm") return v;
    else if (unit == "in") return cm_in_in*v;
    else if (unit == "m") return cm_in_m*v;
    else if (unit == "ft") return cm_in_ft*v;
    else return -1;
}
