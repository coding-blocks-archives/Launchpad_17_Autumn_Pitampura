// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

bool regexMatch(char str[], int i, char pattern[], int j) {
    if (str[i] == '\0' && pattern[j] == '\0') return true;

    if (str[i] == '\0' || pattern[j] == '\0') return false;

    //'?' matches with one char
    if (pattern[j] == '?' || str[i] == pattern[j]) {
        return (str, i + 1, pattern, j + 1);
    }

    if (pattern[i] == '*') {
        int ans1 = regexMatch(str, i, pattern, j + 1); //* matches zero characters
        int ans2 = regexMatch(str, i + 1, pattern, j); //* matches one or more characters
        return ans1 || ans2;
    }

    return str[i] == pattern[j];
}


int main() {
    char str[100];
    char pattern[100];
    cin >> str;
    cin >> pattern;

    bool ans = regexMatch(str, 0, pattern, 0);
    cout << ans;
}