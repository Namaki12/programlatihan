#include <iostream>
using namespace std;

void input(int &n){
    cin >> n;
}

int hitung(int n){
    int faktorial = 1;
    for (int i = 1; i <= n; i++){
        faktorial *= i;
    }
    return faktorial;
}

int main(){
    int n;
    input(n);
    cout << n << "! adalah "<< hitung(n);
    return 0;
}