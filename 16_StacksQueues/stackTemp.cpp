// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;
template <typename T>
class Stack {
    class Node {
    public:
        T data;
        Node * next;
        Node(T d){
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
        // cout << "Stack ctor called" << endl;
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

    T getTop(){
        if (empty()){
            T var;
            return var;
        } 
        return top->data;
    }

    ~Stack(){
        // cout << "dtor called\n";
        while(top){
            Node * ahead = top->next;
            delete top;
            top = ahead;
        }
    }
};

bool isBalanced(char arr[]){
    Stack<char> s;

    for(int i = 0; arr[i] != '\0'; ++i){
        if (arr[i] == '('){
            s.push('(');
        }
        else if (arr[i] == ')'){
            if (s.empty()) return false;
            s.pop();
        }
    }
    return s.size() == 0;
}



int main() {
    char arr[100];
    cin >> arr;

    bool ans = isBalanced(arr);
    cout << ans;


}