//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

void printOddEven(int n) {
    if (n <= 0){
        return;
    }

    //5 3 1 2 4
    // if odd
    if (n % 2 == 1) {
        cout << n << " ";
        printOddEven(n - 1);
    }
    else {
        //it means n is even
        printOddEven( n - 1);
        cout << n << " ";
    }


}

int main() {
    int n;
    cin >> n;
    printOddEven(n);
}