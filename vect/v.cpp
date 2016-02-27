#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int r() {
    return random();
}

long mean(vector<int> &v) {
    long s = 0;
    for (long i=0;i<v.size();i++) {
        s += v[i];
    }
    return s;
}

long mean(long a[], long n) {
    long s = 0;
    for (long i=0;i<n;i++) {
        s += a[i];
    }
    return s;
}

long v1(long n) {
    vector<int> v(n);
    for (long i=0;i<n;i++) {
        v[i] = r();
    }

    cout << "Mean:\t" << mean(v) << endl;
}
void v2(long n) {

    long a[n];
    for (long i=0;i<n;i++) {
        a[i] = r();
    }

    cout << "Mean:\t" << mean(a,n) << endl;


}

double t(double start) {

    return (clock() - start) / (double) CLOCKS_PER_SEC;

}

int main() {

    long n;
    cout << "Number of iterations:" << endl;
    cin >> n;

    clock_t start;
    double duration;
    // algorytm z vector
    start = clock();
    v1(n);
    cout << "Vector:\t" << t(start) << endl;
    // algorytm z tablicą
/*    start = clock();*/
    //v2(n);
    /*cout << "Array:\t" << t(start) << endl;*/
}
