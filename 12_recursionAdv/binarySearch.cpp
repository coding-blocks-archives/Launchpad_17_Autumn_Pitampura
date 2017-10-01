//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include "../helper.h"
#include <iostream>
using namespace std;

int binarySearch(int arr[], int si, int ei, int elementToSearch){
    if(si > ei) return -1;

    int mid = (si + ei) / 2;
    if (arr[mid] == elementToSearch){
        //job is done!
        return mid;
    }
    else if (elementToSearch < arr[mid]){
        //search in the left
        return binarySearch(arr, si, mid - 1, elementToSearch);
    }
    else {
        //if element exists, its there in the right
        return binarySearch(arr, mid + 1, ei, elementToSearch);
    }
}


int main(){
    int arr[100];
    int n;
    cin >> n;

    inputArr(arr, n);

    int x;
    cin >> x;
    
    int pos = binarySearch(arr, 0, n - 1, x);
    cout << "Element found at " << pos << "\n";
    return 0;   
}