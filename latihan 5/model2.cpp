/*
Nama            : Muhammad Yunus Habiby
NPM             : 140810250014
Nama Program    : Kalkulator Sederhana
*/

#include <iostream>
using namespace std;

int a, b;
float hasil;
char operasi;

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

int main(){

    cout << "=== Program Kalkulator Sederhana ===\n";
    cout << "Masukkan angka pertama : ";
    cin >> a;

    cout << "Masukkan operasi (+, -, *, /, %) : ";
    cin >> operasi;

    cout << "Masukkan angka kedua : ";
    cin >> b;
    
    hasil = hitung(a, b, operasi);
    cout <<"Hasil operasi = " << a << " " << operasi << " " << b << " = " << hasil;
    return 0;
}