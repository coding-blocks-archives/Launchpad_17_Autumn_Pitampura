//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include "../helper.h"
using namespace std;

void printRev(int arr[], int si, int ei){
    //when no elements to print
    if (si > ei) return;

    cout << arr[ei] << " ";
    printRev(arr, si, ei - 1);
}

int main(){
    int n;
    cin >> n;
    int arr[10];
    inputArr(arr, n);

    printRev(arr, 0, n - 1);  
}