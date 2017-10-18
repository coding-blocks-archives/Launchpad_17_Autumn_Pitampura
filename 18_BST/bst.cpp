// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node * left, * right;
    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node * insert(Node * root, int x){
    if (root == NULL){
        root = new Node (x);
        return root;
    }
    

    if (x > root->data){
        //right insertion
        root->right = insert(root->right, x);
    }
    else {
        root->left = insert(root->left, x);
    }
    return root;
}

Node * createBST() {
    int x;
    Node * root = NULL;
    while (true) {
        cin >> x;
        if (x == -1) break;
        root = insert(root, x);    
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
    cout << "============\n";
}

void printRange(Node * root, int k1, int k2){
    if (root == NULL){
        return;
    }

    if (root->data >= k1 && root->data <= k2){
        cout << root->data << " ";
    }

    if (k2 < root->data){
        printRange(root->left, k1, k2);
    }
    else if (k1 > root->data){
        printRange(root->right, k1, k2);
    }
    else {
        printRange(root->left, k1, root->data);
        printRange(root->right, root->data, k2);
    }
}

Node * searchBst(Node* root, int x){
    if (root == NULL) return NULL;

    if (root->data == x){
        return root;
    }

    if (x < root->data){
        return searchBst(root->left, x);
    }
    else {
        return searchBst (root->right, x);
    }
}

bst2LL(){

}

bool isBST(Node * root){

}

isBalanced(){

}

int main() {

    Node * root = createBST();
    printLevel2(root);

    // printRange(root, 15, 32);

    int x; cin >> x;
    Node * ans = searchBst(root, x);
    cout << ans << " ";
    if (ans) cout << ans->data
    cout << endl;

}