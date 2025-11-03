#include <iostream>
#include <string>
using namespace std;

struct data 
{
    string pengirim;
    string penerima;
    string nomorPengirim;
    string nomorPenerima;

    struct tempat 
    {
        string alamat;
        string isiSurat;
        string tempatSurat;
        string tanggalSurat;
    };
};

void input(data &d, data::tempat &a)
{
    cin.ignore();

    cout << "Masukkan nama penerima surat : ";
    getline (cin, d.penerima);
    cout << "Masukkan nama pengirim surat : ";
    getline (cin, d.pengirim);
    cout << "Masukkan nomor telepon penerima surat : ";
    getline (cin, d.nomorPengirim);
    cout << "Masukkan nomor telepon pengirim surat : ";
    getline (cin, d.nomorPenerima);
    cout << "Masukkan alamat pengirim surat : ";
    getline (cin, a.alamat);
    cout << "Masukkan isi surat : ";
    getline (cin, a.isiSurat);
    cout << "Masukkan tempat surat dibuat : ";
    getline (cin, a.tempatSurat);
    cout << "Masukkan tanggal surat dibuat : ";
    getline (cin, a.tanggalSurat);
}

void output(const data &d, const data::tempat &a)
{
    cout << "=== Data surat ===\n";
    cout << "Penerima       : " << d.penerima << endl;
    cout << "Pengirim       : " << d.pengirim << endl;
    cout << "Nomor Pengirim : " << d.nomorPengirim << endl;
    cout << "Nomor Penerima : " << d.nomorPenerima << endl;
    cout << "alamat         : " << a.alamat << endl;
    cout << "isi surat      : " << a.isiSurat << endl;
    cout << "tempat surat   : " << a.tempatSurat << endl;
    cout << "tanggal surat  : " << a.tanggalSurat << endl;
}

int main()
{
    data d;
    data::tempat a;

    cin.ignore();

    input(d, a);
    cout << endl;
    output(d, a);
}
/*Andi
Andita
081234567890
081234567891
Jl. Asem Jawa No. 123, Bandung
Hari ini adalah hari ulang tahunmu, Andi. Semoga kamu selalu bahagia dan sukses!
Bandung
28 Oktober 2025*/