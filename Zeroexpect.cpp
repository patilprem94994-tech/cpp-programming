#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter a and b: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw b;
        }

        cout << "Division: " << (float)a / b;
    }
    catch (int x) {
        cout << "Exception: Division by zero error";
    }

    return 0;
}
