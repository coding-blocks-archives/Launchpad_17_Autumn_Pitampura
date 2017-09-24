//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include <cstring>
using namespace std;

void rotateByOne(char str[]){
    if (str[0] == '\0'){ //empty string can't have any rotations
        return; 
    }

    char prevChar = str[0];
    char nextChar = str[0];

    for(int i = 1; str[i] != '\0'; ++i){
        nextChar = str[i];
        str[i] = prevChar;
        prevChar = nextChar;
    }

    str[0] = nextChar;
}


void rotateArr(char str[], int k){
    //O(N2)
    for(int curRot = 0; curRot < k; ++curRot){
        rotateByOne(str);
    }
}

void fastRotation(char str[], int k){
    int len = strlen(str);
    char tmp[100];
    strcpy(tmp, str);

    //rotations
    for(int i = 0; i < len; ++i){
        int idx = (i + k) % len;
        str[idx] = tmp[i];
    }
    //O(N)
}

int main(){
    char arr[100];
    cin >> arr;     // read string

    int k;
    cin >> k;       //read rotations

    // rotateArr(arr, k);
    fastRotation(arr, k); 
    cout << "X" << arr << "X";  
}