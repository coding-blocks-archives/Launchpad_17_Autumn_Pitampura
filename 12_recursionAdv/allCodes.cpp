//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

char output[100];

char digToChar(int num){
    return 'a' + num - 1;
}

void printCodes(char str[], int be, int idx){
    if (str[be] == '\0'){
        output[idx] = '\0';
        cout << output << endl;
        return;
    }

    int curDig = str[be] - '0';
    char curChar = digToChar(curDig);
    output[idx] = curChar;
    printCodes(str, be + 1, idx + 1);

    if (str[be + 1] == '\0') return;

    int curNum = curDig * 10 + (str[be + 1] - '0');
    output[idx] = digToChar(curNum);
    if (curNum <= 26) printCodes(str, be + 2, idx + 1);
}


int main(){
    char str[100];
    cin >> str;

    printCodes(str, 0, 0); 
}