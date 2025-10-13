/*
Nama            : Muhammad Yunus Habiby
NPM             : 140810250014
Nama Program    : Kalkulator Sederhana

*/

#include <iostream>
using namespace std;

int main(){
    int a, b;
    float hasil;
    char operasi;

    cout << "=== Program Kalkulator Sederhana ===\n";
    cout << "Masukkan angka pertama : ";
    cin >> a;

    cout << "Masukkan operasi (+, -, *, /, %) : ";
    cin >> operasi;

    cout << "Masukkan angka kedua : ";
    cin >> b;
    
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
    cout <<"Hasil operasi = " << a << " " << operasi << " " << b << " = " << hasil;
    return 0;
}