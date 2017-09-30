//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include <algorithm>
#include "../helper.h"
using namespace std;

void bubbleSort(int arr[], int be, int en) {
    if (be > en) return;


    bubbleSort(arr, be + 1, en);
    if (be + 1 <= en && arr[be] > arr[be + 1]) {
        swap(arr[be], arr[be + 1]);
        bubbleSort(arr, be + 1, en);
    }

}


int main() {
    int arr[10];
    int n;
    cin >> n;
    inputArr(arr, n);
    bubbleSort(arr, 0, n - 1);
    printArr(arr, n);
}