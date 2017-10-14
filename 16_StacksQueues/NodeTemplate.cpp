// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node<T> * next;
    Node(T d){
        data = d;
        next = NULL;
    }
};

template <typename T, typename C> 
class Pair{
    T first;
    C second;
};

int main() {
    Pair<int, char> p;

    Node<Pair<int, char> > n(p);

}