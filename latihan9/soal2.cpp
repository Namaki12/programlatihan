#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> angka(n*3);

    for (int i = 0; i < n*3; i++)
    {
        cin >> angka[i];
    }

    sort(angka.begin(), angka.end());

    cout << angka[n];
    return 0;
}