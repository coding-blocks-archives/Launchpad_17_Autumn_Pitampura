// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <stack>
#include <iostream>
using namespace std;

void myReverse(stack<int>& s1, stack<int>& s2){
    if (s1.empty()) return;

    int cur = s1.top();
    s1.pop();

    while(s1.empty() == false){
        s2.push(s1.top());
        s1.pop();
    }

    myReverse(s2, s1);

    s1.push(cur);
    while(s2.empty() == false){
        s1.push(s2.top());
        s2.pop();
    }
}


int main() {
    stack<int> s1;
    stack<int> s2;

    int x;
    while(true){
        cin >> x;
        if (x == -1) break;
        s1.push(x);
    } 

    myReverse(s1, s2);

    while(s1.empty() == false){
        cout << s1.top() << " ";
        s1.pop();
    }  
    return 0;
}