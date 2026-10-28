#include <iostream>
using namespace std;

class Demo {
public:
    void add(int a, int b) {
        cout << "Sum = " << a + b << endl;
    }

    void add(int a, int b, int c) {
        cout << "Sum = " << a + b + c << endl;
    }

    void add(float a, float b) {
        cout << "Sum = " << a + b << endl;
    }
};

int main() {
    Demo d;

    d.add(10, 20);
    d.add(10, 20, 30);
    d.add(2.5f, 3.5f);

    return 0;
}
