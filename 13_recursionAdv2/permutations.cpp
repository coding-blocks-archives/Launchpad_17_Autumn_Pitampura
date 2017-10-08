//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include <algorithm>
using namespace std;

char output[100];
int i = 0;

void printPermutations(char inp[], int be, int idx){
    //idx is the index of output where the permutation of inp[be, ] begins
    if (inp[be] == '\0'){
        output[idx] = '\0';
        // sort(output, output + idx);
        cout << ++i << " " << output << endl;
        return;
    }


    for(int curCharAt = be; inp[curCharAt] != '\0'; ++curCharAt){
        swap(inp[be], inp[curCharAt]);
        output[idx] = inp[be];
        printPermutations(inp, be + 1, idx + 1);
        swap(inp[be], inp[curCharAt]);
    }
}


int main(){
    char str[100];
    cin >> str;

    printPermutations(str, 0, 0);   
}