#include "../std_lib_facilities.h"

int str_to_int(string s);
double str_to_double(string s);
void process_vals(int v1, int v2);
void process_vals(double v1, double v2);

int main() {

    string s1;
    string s2;

    while (true) {
        cout << "Provide two integers" << endl;
        cin >> s1 >> s2;
        if (s1 == "|" || s2 == "|") break; 
        double v1;
        double v2;
        try {
            v1 = str_to_double(s1);
            v2 = str_to_double(s2);
            process_vals(v1, v2);
        } 
        catch (exception& e) {
            cout << "Invalid value " << e.what() << endl;
            continue;
        };

    }
    return 0;
}

int str_to_int(string s) {
    return stoi(s);
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
