//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#ifndef HELPER_H_
#define HELPER_H_

#include <iostream>
using namespace std;

void inputArr(int arr[], int n){
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " "; 
    }
}

#endif