#include <iostream>
using namespace std;

int hitung(int n){
    int faktorial = 1;
    for (int i=1; i<=n; i++){
        faktorial *=i;
    }
    return faktorial;
}

int main(){
    int n,i;
    cin >> n;
    cout << n <<"! = "<< hitung(n);
    return 0;
}