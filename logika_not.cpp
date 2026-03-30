#include <iostream>
using namespace std;

int main() {
    float nilM, nilB, rerata;
    string status;

    cout << "Masukkan nilai Matematika = ";
    cin >> nilM;
    cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> nilB;

    rerata = (nilM + nilB) / 2;
    return 0;
}