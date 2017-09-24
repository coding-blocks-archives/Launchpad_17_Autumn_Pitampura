//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

bool isPermutation(char s1[], char s2[]){
    //HW make it work for both lower and upper cases

    int freqMap[26] = {};   //hack!! zero initialised

    //setting
    for(int i = 0; s1[i] != '\0'; ++i){
        int idx = s1[i] - 'a';
        ++freqMap[idx];
    }

    //unset
    for(int i = 0; s2[i] != '\0'; ++i){
        --freqMap[s2[i] - 'a'];
    }

    //checking
    for(int i = 0; i < 26; ++i){
        if (freqMap[i] != 0) return false;
    }
    //now I can conclude that they are permutations
    
    return true;
}

int main(){
    char str1[100];
    char str2[100];

    cin >> str1 >> str2;

    bool ans = isPermutation(str1, str2);
    cout << ans;   
}