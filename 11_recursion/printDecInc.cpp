//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

//5 4 3 2 1 1 2 3 4 5
#include <iostream>
using namespace std;

void printDecInc(int n){
    if (n <= 0) return;

    cout << n << " ";
    printDecInc(n - 1);
    cout << n << " ";
}


int main(){
    int n;
    cin >> n;
    printDecInc(n);    
}