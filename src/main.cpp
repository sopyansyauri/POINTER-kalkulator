#include <iostream>

using namespace std;

class Kalkulator {

    public:
        void tambah(int* c, int* d) {
            cout << *c + *d << endl;
        }

        void kurang(int*c, int* d) {
            cout << *c - *d << endl;
        }
};


int main() {
    Kalkulator hitungan;
    int num1;
    int num2;
    string op;

    cout << "masukan angka pertama: ";
    cin >> num1;
    cout << "masukan operator tambah(+), kurang(-): ";
    cin >> op;
    cout << "masukan angka kedua: ";
    cin >> num2;

    if (op == "+") {
        hitungan.tambah(&num1,&num2);
    } else if (op == "-") {
        hitungan.kurang(&num1,&num2);
    } else {
        cout << "operator salah" << endl;
    }

}