// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string line;
    ifstream mf ("nums.txt");
    long long c;
    while (getline(mf, line)) {
        c += stoi(line);
    }
    cout << c << '\n';

    mf.close();
    return 0;
}
