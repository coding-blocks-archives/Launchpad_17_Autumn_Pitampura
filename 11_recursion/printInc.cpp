//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

//printInc takes one integer N and prints N integers [1, N]
void printInc(int n) {
    if (n == 0) return;

    printInc(n - 1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    printInc(n);
}