//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

char output[100];

char * digToStr(char c) {
    static char table[][5] = {
        " ",
        "?@.", "abc", "def",
        "ghi", "jkl", "mno",
        "pqrs", "tuv", "wxyz"
    };
    return table[c - '0'];
}

void printKeypadCodes(char str[], int be, int idx) {
    if (str[be] == '\0'){
        output[idx] = '\0';
        cout << output << endl;
        return;
    }

    char curChar = str[be];
    char * code = digToStr(curChar);
    for (int i = 0; code[i] != '\0'; ++i) {
        output[idx] = code[i];
        printKeypadCodes(str, be + 1, idx + 1);
    }

}

int main() {
    char str[100];
    cin >> str;

    printKeypadCodes(str, 0, 0);


}