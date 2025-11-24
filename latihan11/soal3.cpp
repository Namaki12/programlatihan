#include <iostream>
using namespace std;
int main (){
    int d;
    double p = 3.14159;
    cout << "Masukkan diameter lingkaran: ";
    cin >> d;

    double keliling = p*d;
    cout << keliling << "cm";

    return 0;
}