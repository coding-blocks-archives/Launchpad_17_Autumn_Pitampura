// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <queue>
#include <stack>
#include <iostream>
using namespace std;

void insert(queue<int> & q){
    int x;
    while(true){
        cin >> x;
        if (x == -1) break;
        q.push(x);
    }
}

template <typename T>
void print(queue<T> q){
    while(q.empty() == false){
        cout << q.front() << " ";
        q.pop();
    }
}


void reverse(queue<int> & q){
    stack<int> s;
    //empty q into stack
    while(q.empty() == false){
        s.push(q.front());
        q.pop();
    }

    //empty s into q
    while(s.empty() == false){
        q.push(s.top());
        s.pop();
    }
}


int main() {
    queue<int> q;
    insert(q);

    reverse(q);

    print(q);    
}