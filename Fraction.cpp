include <iostream>
using namespace std;

class Fraction {
    int a, b;

public:
    void accept() {
        cin >> a >> b;
    }

    Fraction add(Fraction f)
     {
        Fraction r;
        r.a = a * f.b + f.a * b;
        r.b = b * f.b;
        return r;
    }

    void display() 
    {
        cout << a << "/" << b;
    }
};

int main() {
    Fraction f1, f2,sum;

    cout << "Enter a b: ";
    f1.accept();

    cout << "Enter c d: ";
    f2.accept();

    sum = f1.add(f2);

    cout << "Addition = ";
    sum.display();

    return 0;
}
