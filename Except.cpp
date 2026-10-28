#include <iostream>
#include <exception>
using namespace std;

class myage : public exception {
public:
    const char* what() const noexcept override {
        return "Attempted to vote under 18";
    }
};

class student {
public:
    int age;

    void setage(int a) {
        if (a < 18) {
            throw myage();
        }
        age = a;
    }

    void display() {
        cout << "Student age: " << age << endl;
        cout << "Eligible";
    }
};

int main() {
    student s;

    try {
        s.setage(20);
        s.display();
    }
    catch (const myage& e) {
        cout << e.what();
    }

    return 0;
}
