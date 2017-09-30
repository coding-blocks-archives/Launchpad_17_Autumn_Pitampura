//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

//fact computes the factorial of a number
int fact(int n){
    if (n == 0) return 1;

    int factN = n * fact(n - 1);
    return factN;
}

int main(){
    int n;    
    cin >> n;

    int ans = fact(n);
    cout << ans;
}