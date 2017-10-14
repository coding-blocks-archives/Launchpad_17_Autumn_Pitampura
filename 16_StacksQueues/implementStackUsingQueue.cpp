// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

class StackUsingQue{
    queue<int> q1;
    queue<int> q2;

public:
    StackUsingQue(){

    }
    void push(int d);
    int pop();
}


int main() {
    StackUsingQue s;
    s.push(2);
    s.pop();
}