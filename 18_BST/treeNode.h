
#ifndef _NODE_H
#define _NODE_H
#include <iostream> //for NULL
class Node {
public:
    int data;
    Node * left;
    Node * right;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
#endif