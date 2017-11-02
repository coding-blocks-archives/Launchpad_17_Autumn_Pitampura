// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
    int a[][2] = {
        {1, 2},
        {3, 4}
    };

    cout << *(a +1) ;
}