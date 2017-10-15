
#include <iostream>
#include <queue>
#include "node.h"
#include <algorithm> //for max
using namespace std;

Node * inputTree() {
    int x;
    cin >> x;
    if (x == -1) return NULL;

    Node * root = new Node(x);
    cout << "Left child of " << root->data << " ";
    root->left = inputTree();
    cout << "Right child of " << root->data << " ";
    root->right = inputTree();
    return root;
}

void printTree(Node * root) {
    if (root == NULL) return;

    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}


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


void printLevel(Node * root) {
    if (root == NULL) return;
    queue<Node *> q;
    q.push(root);

    int curLevel = 1;
    int nexLevel = 0;

    while (q.empty() == false) {
        Node * cur = q.front();
        q.pop();
        --curLevel;

        cout << cur->data << " ";
        if (cur->left) {
            q.push(cur->left);
            ++nexLevel;
        }
        if (cur->right) {
            q.push(cur->right);
            ++nexLevel;
        }

        if (curLevel == 0) {
            cout << endl;
            curLevel = nexLevel;
            nexLevel = 0;
        }
    }

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

Node * findEle(Node * root, int X) {
    if (root == NULL) {
        return NULL;
    }

    if (root->data == X) return root;

    Node * leftAns = findEle(root->left, X);

    if (leftAns) {
        //it means element found in the left
        return leftAns;
    }

    return findEle(root->right, X);
}

void printAtLevelK(Node * root, int K) {
    if (root == NULL) return;

    if (K == 0) {
        cout << root->data << " ";
        return;
    }

    printAtLevelK(root->left, K - 1);
    printAtLevelK(root->right, K - 1);
}

void postPrint(Node * root) {
    //left right root

}

void preOrder(Node * root) {
    //root left right
}

int greaterThanX(Node * root, int X) {
    if (root == NULL) return 0;

    int leftAns = greaterThanX(root->left, X);
    int rightAns = greaterThanX(root->right, X);

    return leftAns + rightAns + (root->data > X ? 1 : 0);
}

int computeSum(Node * root){
    if (root == NULL) return 0;
    int d = root ? root->data : 0;
    int l = root->left ? root->left->data : 0;
    int r = root->right ? root->right->data : 0;
    return l + d + r;
}

Node * mostProsperousFamily(Node * root) {
    if (root == NULL) return NULL;

    Node * leftBestFamily = mostProsperousFamily(root->left);
    Node * rightBestFamily = mostProsperousFamily(root->right);

    int l_sum = computeSum(leftBestFamily);
    int r_sum = computeSum(rightBestFamily);
    int my_sum = computeSum(root);

    int max_sum = max(my_sum, max(l_sum, r_sum));
    if (max_sum == l_sum) return leftBestFamily;
    if (max_sum == r_sum) return rightBestFamily;
    return root;
}


int main() {
    // Node * root = inputTree();
    // printTree(root);

    Node * root = createTreeLevel();
    printLevel2(root);


    // int ans = height(root);
    // cout << ans << endl;

    // int x; cin >> x;
    // Node * ans = findEle(root, x);
    // cout << ans << " ";
    // if (ans) cout << ans->data << endl;

    // int K; cin >> K;
    // printAtLevelK(root, K);

    Node * ans = mostProsperousFamily(root);
    cout << ans << " ";
    if (ans) cout << ans->data << endl;
}