#include <iostream>
using namespace std;

void hitungTegangan(int &V, int I, int R){
    V = I*R;
}
int main(){
    int V, I, R;
    cout << "Masukkan nilai arus (Ampere) ";
    cin >> I;
    cout << "Maukkan nilai hambatan (Ohm): ";
    cin >> R;

    hitungTegangan(V, I, R);
    cout << "Nilai tegangan: "<< V << " Volt";

    return 0;
}