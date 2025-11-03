#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, max;
    cin >> n;

    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector <int> pasangan;
    for (int i = 0; i < n-1; i++){
        pasangan.push_back(arr[i] + arr[i + 1]);
    }

    int maxCount = 0;
    for (int i = 0; i < pasangan.size(); i++){
        int count = 1;
        int lastIndex = i;

        for (int j = i + 1; j < pasangan.size(); j++){
            if (pasangan[j] == pasangan[i] && j > lastIndex + 1){
                count ++;
                lastIndex = j;
            }
        }

        if (count > maxCount){
            maxCount = count;
        }
    }
    cout << maxCount;
    return 0;

}