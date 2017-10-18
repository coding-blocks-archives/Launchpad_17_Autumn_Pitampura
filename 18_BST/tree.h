#ifndef TREE_H_
#define TREE_H_
#include <iostream>
#include <queue>
#include "treeNode.h"
using namespace std;

Node * createTreeLevel() {
    int x;
    cin >> x;
    if (x == -1) return NULL;

    Node * root = new Node(x);
    queue<Node *> q;
    q.push(root);

    while (q.empty() == false) {
        Node * parent = q.front();
        q.pop();

        cin >> x;
        if (x != -1) {
            parent->left = new Node(x);
            q.push(parent->left);
        }

        cin >> x;
        if (x != -1) {
            parent->right = new Node(x);
            q.push(parent->right);
        }
    }

    return root;
}


void printLevel2(Node * root) {
    if (root == NULL) return ;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node * cur = q.front();
        q.pop();

        if (cur == NULL) {
            //nexl level's all nodes have been pushed to the queue
            cout << endl;
            if (q.empty() == false) {
                q.push(NULL);
            }
            continue;
        }
        cout << cur->data << " ";
        if  (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }
}

int height(Node * root) {
    if (root == NULL) return 0;

    int leftHt = height(root->left);
    int rightHt = height(root->right);

    int curHt = max(leftHt, rightHt) + 1;
    return curHt;


}


#endif