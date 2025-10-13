#include <iostream>
using namespace std;

int main()
{
    int a, b;
    float hasil;
    char operasi;

    cout << "=== Program Kalkulator Sederhana ===\n";
    cout << " Masukkan angka pertama : ";
    cin >> a;

    cout << "Masukkan operasi +, -, *, /, % : ";
    cin >> operasi;

    cout << "Masukkan angka kedua : ";
    cin >> b;

    if (operasi == '+' || operasi == '-' || operasi == '*' || operasi == '/' || operasi == '%')
    {
        switch (operasi)
        {
        case '+':
            hasil = a + b;
            break;
        case '-':
            hasil = a - b;
            break;
        case '*':
            hasil = a * b;
            break;
        case '/':
            hasil = a / b;
            break;
        case '%':
            hasil = a % b;
            break;
        default:
            cout << "Anda salah memasukkan operator!";
            break;
        }
    }
    cout << "Hasil operasi = " << a << " " << operasi << " " << b << " = " << hasil;
}