/*
Nama            : Muhammad Yunus Habiby
NPM             : 140810250014
Nama Program    : Program perihitungan biaya parkir motor/mobil
*/

#include <iostream>
using namespace std;

struct data
{
    int jamDatang, menitDatang, detikDatang;
    int jamPulang, menitPulang, detikPulang;
    int jamParkir, menitParkir, detikParkir;
    string jenisKendaraan;
    int bayar;
};

void input(data &d)
{
    cout << "Masukkan Jam Datang Anda (Jam, Menit, dan Detik) : ";
    cin >> d.jamDatang >> d.menitDatang >> d.detikDatang;
    cout << "Masukkan Jam Pulang Anda (Jam, Menit, dan Detik) : ";
    cin >> d.jamPulang >> d.menitPulang >> d.detikPulang;
    cout << "Masukkan Jenis Kendaraan Anda (Mobil/Motor) : ";
    cin >> d.jenisKendaraan;
}

void hitung(data &d)
{
    int waktuDatang = (d.jamDatang * 3600) + (d.menitDatang * 60) + d.detikDatang;
    int waktuPulang = (d.jamPulang * 3600) + (d.menitPulang * 60) + d.detikPulang;

    int selisih = waktuPulang - waktuDatang;

    d.jamParkir = selisih / 3600;
    selisih %= 3600;
    d.menitParkir = selisih / 60;
    d.detikParkir = selisih % 60;

    int totalJam = d.jamParkir;
    if (d.menitParkir > 0 || d.detikParkir > 0)
        totalJam++;

    if (d.jenisKendaraan == "Motor" || d.jenisKendaraan == "motor")
    {
        if (totalJam <= 1)
        {
            d.bayar = 2000;
        }
        else
        {
            d.bayar = 2000 + (totalJam - 1) * 2000;
        }
    }

    else if (d.jenisKendaraan == "Mobil" || d.jenisKendaraan == "mobil")
    {
        if (totalJam <= 1)
        {
            d.bayar = 3000;
        }
        else
        {
            d.bayar = 3000 + (totalJam - 1) * 3000;
        }
    }
    else
    {
        {
            d.bayar = 0;
        }
    }
}

    void output(const data &d)
    {
        cout << "======== Perhitungan Biaya Parkir ========\n";
        cout << "Jam Datang         = " << d.jamDatang << " : " << d.menitDatang << " : " << d.detikDatang << endl;
        cout << "Jam Pulang         = " << d.jamPulang << " : " << d.menitPulang << " : " << d.detikPulang << endl;
        cout << "Lama Parkir        = " << d.jamParkir << " : " << d.menitParkir << " : " << d.detikParkir << endl;
        cout << "Jenis Kendaraan    = " << d.jenisKendaraan << endl;
        cout << "Bayar              = " << "Rp " << d.bayar << endl;
    }

    int main()
    {
        data d;
        input(d);
        hitung(d);
        output(d);

        return 0;
    }