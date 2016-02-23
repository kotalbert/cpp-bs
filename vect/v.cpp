#include <vector>
#include <iostream>
int main() {    

    int n;
    std::vector<int> v;
    std::cout << "Length of vector>>";
    std::cin >> n;

    for (int i=0;i<n;i++) {
        v.push_back(i);
    }

    for (int i=0;i<v.size();i++) {
        std::cout << v[i] << std::endl;
    }
    return 0;
}
