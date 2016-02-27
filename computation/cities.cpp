#include "../std_lib_facilities.h"

typedef vector<double> vect;

void print_v(vect v) {
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << '\t';
    }
    cout << endl;
}

double total_dist(vect v) {
    double s = 0;
    for (int i=0; i<v.size();i++) {
        s += v[i];
    }
    return s;
}

double mean_dist(vect v) {
    return total_dist(v)/v.size();
}

double closest_dist(vect v) {
    double min_dist = v[0];

    for(int i=1; i<v.size(); i++) {
        min_dist = min(min_dist, v[i]);
    }    
    return min_dist;
}

double greatest_dist(vect v) {
    double max_dist = v[0];
    for (int i = 1; i<v.size(); i++) {
        max_dist = max(max_dist, v[i]);
    }
    return max_dist;
}

int main() {

    vect dist = {3,4,5,6,7,8};
    print_v(dist);
    cout << "Distance sum:\t" << total_dist(dist) << endl;
    cout << "Distance mean:\t" << mean_dist(dist) << endl;
    cout << "Closest distance:\t" << closest_dist(dist) << endl;
    cout << "Greatest distance:\t" << greatest_dist(dist) << endl; 


}
