#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;
    ifstream fin;
    string text;

    // Open file for writing
    fout.open("demo.txt");
    fout << "Hello C++";
    fout.close();

    // Open file for reading
    fin.open("demo.txt");
    getline(fin, text);

    cout << "File content: " << text;

    fin.close();

    return 0;
}
