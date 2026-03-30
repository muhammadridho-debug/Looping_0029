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
   
    if (!(rerata < 60)) {
        status = "Lulus";
    } else {
        status = "Tidak lulus";
    }

    cout << "Status kelulusan = " << status << ", dengan nilai rata rata = " << rerata << endl;
    return 0;
}