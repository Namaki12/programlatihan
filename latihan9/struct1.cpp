/*
Nama            : Muhammad Yunus Habiby
NPM             : 140810250014
Nama Program    : Program pencerminan titik (x,y) terhadap sumbu x dan sumbu y
*/

#include <iostream>
using namespace std;

struct Titik {
    float x;
    float y;
};

Titik cariTengah(Titik a, Titik b) {
    Titik tengah;
    tengah.x = (a.x + b.x) / 2;
    tengah.y = (a.y + b.y) / 2;
    return tengah;
}

Titik cerminSumbuX(Titik p) {
    Titik hasil;
    hasil.x = p.x;
    hasil.y = -p.y;
    return hasil;
}

Titik cerminSumbuY(Titik p) {
    Titik hasil;
    hasil.x = -p.x;
    hasil.y = p.y;
    return hasil;
}

void input(Titik &A, Titik &B)
{
    cout << "Masukkan koordinat titik A (x y): ";
    cin >> A.x >> A.y;
    cout << "Masukkan koordinat titik B (x y): ";
    cin >> B.x >> B.y;
}

void output(Titik A, Titik B)
{
    Titik T = cariTengah(A, B);
    cout << "\n=== HASIL PERHITUNGAN ===" << endl;
    cout << "Titik tengah antara A dan B = (" << T.x << ", " << T.y << ")" << endl;

    Titik hasilX = cerminSumbuX(A);
    Titik hasilY = cerminSumbuY(A);

    cout << "Pencerminan titik A terhadap sumbu X = (" << hasilX.x << ", " << hasilX.y << ")" << endl;
    cout << "Pencerminan titik A Terhadap sumbu Y = (" << hasilY.x << ", " << hasilY.y << ")" << endl;
}

int main()
{
    Titik A, B;

    input(A, B);  
    output(A, B); 

    return 0;
}