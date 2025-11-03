#include <iostream>
#include <string>
using namespace std;

struct data {
    string penerima;
    string pengirim;
    string nomor;
};

void input(data &d){
    cout << "Masukkan nama penerima surat : ";
    cin >> d.penerima;
    cout << "Masukkan nama pengirim surat : ";
    cin >> d.pengirim;
    cout << "Masukkan nomor telepon penerima surat : ";
    cin >> d.nomor;
}

void output(const data &d){
    cout << "=== Data surat ===\n";
    cout << "Penerima : " << d.penerima << endl;
    cout << "Pengirim : " << d.pengirim << endl;
    cout << "Nomor    : " << d.nomor << endl;
}

int main(){
    data d;
    input(d);
    cout << "\n";
    output(d);
}