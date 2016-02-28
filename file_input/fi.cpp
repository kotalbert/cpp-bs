#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i=0;i<n;i++) {
        cin >> v[i];
    }
    
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << '\t';
    }
    cout << '\n';

    return 0;
}
