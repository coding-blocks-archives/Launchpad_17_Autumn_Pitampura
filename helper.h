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

template <class T>
void input2D(T arr[][20], int M, int N){
    for(int i = 0; i < M; ++i){
        for(int j = 0; j < N; ++j){
            cin >> arr[i][j];
        }
    }
}

template<class T>
void print2D(T arr[][20], int M, int N){
    for(int i = 0; i < M; ++i){
        for(int j = 0; j < N; ++j){
            cout << arr[i][j] << " ";       
        }
        cout << endl;
    }
}

#endif