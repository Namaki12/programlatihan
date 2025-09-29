#include <iostream>
using namespace std;

int main(){
    int n,faktorial;
    cin >> n;
    faktorial = 1;
    for (int i = 1; i <= n; i++){
        faktorial *= i;
    }
    cout << n << "! adalah "<< faktorial;
    return 0;
}