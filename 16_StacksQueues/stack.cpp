// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

class Stack {
    class Node {
    public:
        int data;
        Node * next;
        Node(int d){
            data = d;
            next = NULL;
        }
    };
    Node * top;   
    int sze;

public:
    Stack(){
        //ctor
        //initialisation HAS to be done
        cout << "Stack ctor called" << endl;
        top = NULL;
        sze = 0;
    }

    bool empty(){
        return sze == 0;
    }

    bool size(){
        return sze;
    }

    void push(int d){
        Node * tmp = new Node(d);
        ++sze;
        if (top == NULL){
            top = tmp;
        }
        else {
            tmp->next = top;
            top = tmp;
        }
    }

    void pop(){
        if (top == NULL) return;
        Node * cur = top;
        top = top->next;
        delete cur;
        --sze;
    }

    int getTop(){
        if (empty()) return -1;
        return top->data;
    }

    ~Stack(){
        cout << "dtor called\n";
        while(top){
            Node * ahead = top->next;
            delete top;
            top = ahead;
        }
    }
};

int main() {
    Stack s;

    s.push(2);
    s.push(12);
    s.pop();
    cout << s.getTop();


}