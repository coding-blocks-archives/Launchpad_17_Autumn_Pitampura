//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include "../helper.h"
using namespace std;

int findMax(int arr[], int si, int ei) {

    if (si > ei) return -100000000;

    int cur = arr[si];
    int remLar = findMax(arr, si + 1, ei);

    // if (cur > remLar) return cur;
    // else return remLar;

    return cur > remLar ? cur : remLar;

}

int main() {
    int n;
    cin >> n;
    int arr[10];
    inputArr(arr, n);

    int maxEle = findMax(arr, 0, n - 1);

    cout << maxEle;
}