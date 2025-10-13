/*
Nama            : Muhammad Yunus Habiby
NPM             : 140810250014
Nama Program    : Kalkulator Sederhana
*/

#include <iostream>
using namespace std;

int a, b;
char operasi;
float hasil;

void inputAngka(){
    cout << "=== Program Kalkulator Sederhana ===\n";
    cout << "Masukkan angka pertama : ";
    cin >> a;

    cout << "Masukkan operasi (+, -, *, /, %) : ";
    cin >> operasi;

    cout << "Masukkan angka kedua : ";
    cin >> b;
}

int hitung(int a, int b, char operasi){
    if (operasi == '+'){
        hasil = a + b;
    }
    else if (operasi == '-'){
        hasil = a - b;
    }
    else if (operasi == '*'){
        hasil = a * b;
    }
    else if (operasi == '/'){
        hasil = a / b;
    }
    else if (operasi == '%'){
        hasil = a % b;
    }
    else {
        cout << "Anda salah memasukkan operator!";
    }
    return hasil;
}

void tampilHasil(float hasil){
    cout <<"Hasil operasi = " << a << " " << operasi << " " << b << " = " << hasil;
}

int main(){
    inputAngka();
    hasil = hitung(a, b, operasi);
    tampilHasil(hasil);
    return 0;
}