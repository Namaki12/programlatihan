#include <iostream>
using namespace std;

int main(){
    int n,i,faktorial;
    faktorial = 1;
    cin >> n;
    for (i=1; i<=n; i++){
        faktorial *=i;
    }
    cout << n <<"! = "<< faktorial;
    return 0;
}