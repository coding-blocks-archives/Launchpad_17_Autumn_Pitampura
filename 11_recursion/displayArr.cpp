//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include "../helper.h"
using namespace std;

void printArray(int arr[], int si, int ei){
    if (si > ei) return ;

    cout << arr[si] << " ";
    printArray(arr, si + 1, ei);
}


int main(){
    int arr[10];
    int n;
    cin >> n;

    inputArr(arr, n);

    printArray(arr, 0, n - 1);

}