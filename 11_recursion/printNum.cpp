//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

void digitToChar_old(int dig){
    // if (dig == 0) cout << "zero";
    // if (dig == 1) cout << "one";

    switch(dig){
        case 0 : cout << "zero"; break;
        case 1 : cout << "one"; break;
        case 2 : cout << "two"; break;
        case 3 : cout << "three"; break;
        case 4 : cout << "four"; break;
        case 5 : cout << "five"; break;
        case 6 : cout << "six"; break;
        case 7 : cout << "seven"; 
            break;
        case 8 : cout << "eight"; break;
        case 9 : cout << "nine"; break;
    }
}

const char* digitToChar(int dig){

    static const char table[][20] = {
        "zero", "one", "two", "three", 
        "four", "five", "six", "seven", 
        "eight", "nine"
    };

    return table[dig];
}


void printNum(int n){
    if (n == 0) return;

    int unitDig = n % 10;
    int remNum  = n / 10;
    printNum(remNum);
    cout <<  " ";

    cout << digitToChar(unitDig);
}


int main() {

    int n;
    cin >> n;
    printNum(n);

}