//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

int * foo(int n){
    // int arr[10];
    int * arr = new int[10]; 
    arr[0] = 10;
    return arr;
}


int main(){
    int n;
    cin >> n;
    int * catchPtr = foo(n);
    delete [] catchPtr;
    cout << catchPtr[0];   
}