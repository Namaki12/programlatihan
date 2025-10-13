#include <iostream>
#include <string>
using namespace std;

void inputNilai(string nama[], float nilai[], int &n)
{
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    cout << "\n===== Input Data Mahasiswa =====\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nama mahasiswa ke-" << i + 1 << " : ";
        cin >> nama[i];
        cout << "Nilai mahasiswa : ";
        cin >> nilai[i];
    }
    cout << endl;
}

void tampilkanNilai(string nama[], float nilai[], int n)
{
    cout << "\n===== Daftar Nilai Mahasiswa =====\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Nilai" << nama[i] << " : " << nilai[i] << endl;
    }
}

float cariRata(float nilai[], int n)
{
    float jumlah = 0;
    for (int i = 0; i < n; i++)
    {
        jumlah += nilai[i];
    }
    return jumlah / n;
}

float nilaiMaks(float nilai[], int jumlah)
{
    float maks = nilai[0];
    for (int i = 1; i < jumlah; i++)
    {
        if (nilai[i] > maks)
        {
            maks = nilai[i];
        }
    }
    return maks;
}

float nilaiMin(float nilai[], int jumlah)
{
    float min = nilai[0];
    for (int i = 1; i < jumlah; i++)
    {
        if (nilai[i] < min)
        {
            min = nilai[i];
        }
    }
    return min;
}
void tampilHasil(string nama[], float nilai[], int n)
{
    float rata = cariRata(nilai, n);
    float maks = nilaiMaks(nilai, n);
    float min = nilaiMin(nilai, n);

    cout << "\n===== Hasil Perhitungan =====\n";
    cout << "Rata-rata nilai : " << rata << endl;
    cout << "Nilai maksimum  : " << maks << endl;
    cout << "Nilai minimum   : " << min << endl;
    cout << endl;

    cout << "Mahasiswa dengan nilai tertinggi : " << endl;
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] == maks)
        {
            cout << "- " << nama[i] << " (" << nilai[i] << ")" << endl;
        }
    }
    cout << endl;

    cout << "Mahasiswa dengan nilai terendah : " << endl;
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] == min)
        {
            cout << "- " << nama[i] << " (" << nilai[i] << ")" << endl;;
        }
    }
    cout << endl;
}

int main()
{
    int n;
    string nama[100];
    float nilai[100];

    inputNilai(nama, nilai, n);
    tampilkanNilai(nama, nilai, n);
    tampilHasil(nama, nilai, n);

    return 0;
}