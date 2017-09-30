//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include "../helper.h"
using namespace std;

int findArr(int arr[], int si, int ei, int x){
    if (si > ei) return -1;

    if (arr[si] == x) return si;

    return findArr(arr, si + 1, ei, x);
}


int main(){
    int n;
    cin >> n;
    int arr[10];
    inputArr(arr, n);
    int x;
    cin >> x;

    int pos = findArr(arr, 0, n - 1, x);
    cout << pos << endl;   
}