//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

int fib(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prevFib = fib(n - 1);
    int superPrev = fib(n - 2);
    int nthFib = prevFib + superPrev;
    return nthFib;
}


int main(){
    int n;
    cin >> n;
    cout << fib(n);   
}