//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << arr << endl;    //address of first row
    cout << arr + 1 << endl;    
    cout << **(arr + 1) << endl;
    cout << arr[0] << endl; //row 0 itself
    cout  << *(arr[0]) << endl;
    cout << &arr[0][0] << endl;
    cout << arr[0] + 1 << endl;
    cout << (&arr[0][0]) + 1 << endl;
    cout << arr + 1 << endl;
    cout << &arr[1][0] << endl;
}