#include <iostream>
using namespace std;
void hitungRata(int n, int arr[], double &rata)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
        rata = (double) total / n;
    }
}

int main()
{
    int n;
    cout << "Masukkan banyak elemen: ";
    cin >> n;

    int arr[n];
    cout << "masukkan elemen: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double rata;
    cout << "rata-rata nilai: ";
    hitungRata(n, arr, rata);
    cout << rata;

    return 0;
}