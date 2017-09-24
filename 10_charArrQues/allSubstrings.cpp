//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

//abcd

#include <iostream>
#include <cstring>
using namespace std;

void print(char str[], int be, int en){
    //[a a] = a
    //[a c] = abc
    while(be <= en){
        cout << str[be];
        ++be;
    }
}

void printSub(char str[], int be, int en){
    //prints all the substring starting from char be
    //char be is fixed
    //[a,d]
    //a ab abc abcd
    int lastUpto = be; //[a a] [a b] [a c] [a d]
    
    while(lastUpto <= en){
        print(str, be, lastUpto);
        cout << endl;
        ++lastUpto;
    }
}

void printSubStr(char str[]) {
    int len = strlen(str);
    int en = len - 1;

    for (int be = 0; str[be] != '\0'; ++be) {
        //[a,d]
        //[b,d]...
        printSub(str, be, en);
        cout << "===========================" << endl;
    }
}


int main() {
    char arr[100];
    cin >> arr;

    printSubStr(arr);

}