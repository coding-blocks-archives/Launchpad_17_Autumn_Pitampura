//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include <cstring>
using namespace std;

int strToInt(char str[], int be, int en) {
    //"123"
    if (be > en) {
        return 0;
    }

    //ask integer equivalent of string other than unit digit
    int remNum = strToInt(str, be, en - 1); //"12" --> 12
    int curDig = str[en] - '0'; //"3" --> 3
    int curNum = remNum * 10 + curDig; //12*10 + 3
    return curNum;
}

int main() {
    char str[100];
    cin >> str;

    int len = strlen(str);

    int intEquivalent = strToInt(str, 0, len - 1);
    cout << intEquivalent << "\n";
    cout << intEquivalent + 20 << "\n";
}