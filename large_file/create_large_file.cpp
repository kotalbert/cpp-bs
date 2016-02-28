#include <cstdlib>
#include <iostream>
#include <fstream>

int main() {

    long long n = 6000000;
    std::ofstream mf;
    mf.open("nums.txt");
    for (long long i=1; i<n; i++) {
        mf << std::rand() << '\n';    
    }
    mf.close();
    return 0;
}
