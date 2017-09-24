//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <algorithm>
#include <iostream>
using namespace std;

void waveSort(int arr[], int n) {
    //sort
    for (int i = 0; i + 1 < n; i += 2) {
        swap(arr[i], arr[i + 1]);
    }

}

void waveSort2(int arr[], int n) {
    for (int i = 1; i < n; i += 2) {
        if (arr[i] > arr[i - 1]) swap(arr[i], arr[i - 1]);
        if (i + 1 < n && arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
        //Short circuit evaluation
    }
}


int main() {
    int arr[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)  cin >> arr[i];

    waveSort2(arr, n);

    for (int i = 0; i < n; ++i)  cout << arr[i] << " ";
    cout << endl;
}