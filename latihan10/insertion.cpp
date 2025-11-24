#include <iostream>
using namespace std;

void selectionAscending(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int idxMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[idxMin])
                idxMin = j;
        }
        int temp = arr[i];
        arr[i] = arr[idxMin];
        arr[idxMin] = temp;
    }
}

void selectionDescending(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int idxMax = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[idxMax])
                idxMax = j;
        }
        int temp = arr[i];
        arr[i] = arr[idxMax];
        arr[idxMax] = temp;
    }
}

int main()
{
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionAscending(n, arr);
    cout << "Hasil sorting ascending: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    selectionDescending(n, arr);
    cout << "Hasil sorting descending: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}