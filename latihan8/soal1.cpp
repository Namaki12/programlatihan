#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> kata;
    int jumlah;
    cin >> jumlah;

    kata.resize(jumlah);

    for (int i = 0; i < jumlah; i++)
    {
        cin >> kata[i];
    }

    for (int i = 0; i < jumlah; i++)
    {
        int panjang = kata[i].length();

        for (int j = 0; j < panjang; j++)
        {
            if (kata[i][j] == 'c' && kata[i][j+1] == 'h')
            {
                kata[i].erase(j+1, 1);
                panjang--;
            }
            else if (kata[i][j] == 'c' && kata[i][j+1] != 'i' && kata[i][j+1] != 'e' && kata[i][j + 1] != 'h' && kata[i][j + 1] != 'y')
            {
                kata[i][j] = 'k';
            }
            else if (kata[i][j] == 'c' && (kata[i][j + 1] == 'e' || kata[i][j + 1] == 'i' || kata[i][j + 1] == 'y'))
            {
                kata[i][j] = 's';
            }
            else if (j == panjang - 1 && kata[i][j] == 'c')
            {
                kata[i][j] = 'k';
            }
        }
    }

    cout << endl;
    for (int i = 0; i < jumlah; i++)
    {
        cout << kata[i] << '\n';
    }

}