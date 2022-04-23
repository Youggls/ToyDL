#include <iostream>

using namespace std;

class A {
protected:
    void* data;
public:
    void print() {
        cout << *(int*) data << endl;
    }
};

class B: public A {
public:
    B() {
        data = new int(10);
        ((int*)data) [0] = 100;
    }
};

int main() {
    B* b = new B();
    A* a = b;
    // a->print();
    b->print();
    return 0;
}
