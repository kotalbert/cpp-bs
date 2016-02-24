#include<iostream>

using std::cout;
using std::endl;

struct my_struct {
    int x;
    int y;
    const char* c;
};

void print_struct(my_struct &st) {
    cout << "Printing struct:" << endl;
    cout << st.x << endl;
    cout << st.y << endl;
    cout << st.c << endl;
}


void change_struct(my_struct &st) {
    st.x += 120;
    st.y += 240;
    st.c = "this is not america";
}

int main() {

    my_struct st = {20,30, "this is love"};
    print_struct(st);
    change_struct(st);
    print_struct(st);
}
