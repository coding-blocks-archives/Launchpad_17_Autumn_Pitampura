// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string s = "Abcdef";
    s[2] = '\0';

    char  cs[] = "Abcdef";
    cs[2] = '\0';


 
    cout << "string " << s << endl;
    cout << "char [] " << (cs) << endl;   
}