//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

int computePow(int n, int x){
    if (x <= 0) return 1;

    int halfPow = computePow(n, x / 2);
    int ans = halfPow * halfPow;

    if (x % 2 == 1) ans = ans * n;
    return ans;
}

int main(){
    int n, x;
    cin >> n >> x;
    int ans = computePow(n , x);
    cout << ans;   
}