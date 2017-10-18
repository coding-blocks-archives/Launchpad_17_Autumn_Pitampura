// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include "tree.h"
#include <iostream>
#include <climits>  //INT_MAX, INT_MIN
using namespace std;

int countNodes(Node * root) {
    if (root == NULL) {
        //tree is empty
        return 0;
    }

    int leftAns = countNodes(root->left);
    int rightAns = countNodes(root->right);
    int myAns = leftAns + 1 + rightAns;
    return myAns;
}

int diameter(Node * root) {
    //O(n2)
    if (root == NULL) {
        return 0;
    }

    int leftDia = diameter(root->left);
    int rightDia = diameter(root->right);

    int leftHt = height(root->left);
    int rightHt = height(root->right);
    int curDia = leftHt + 1 + rightHt;
    return max(max(leftDia, rightDia), curDia);
}

class Pair {
public:
    int height;
    int dia;
};

// pair<int, int> p;   //first, second, <utility>
// pair<int, int> diameterOpt(Node * root){

Pair diameterOpt(Node * root) {
    if (root == NULL) {
        Pair P;
        P.height = 0;
        P.dia = 0;
        return P;
    }

    Pair leftAns = diameterOpt(root->left);
    Pair rightAns = diameterOpt(root->right);

    Pair cur;
    cur.height = max(leftAns.height, rightAns.height) + 1;
    int diaViaRoot = leftAns.height + 1 + rightAns.height;
    cur.dia = max(max(leftAns.dia, rightAns.dia), diaViaRoot);

    return cur;
}

void mirror(Node * root) {
    if (root == NULL) {
        return;
    }

    mirror(root->left);
    mirror(root->right);

    // Node * tmp = root->left;
    // root->left = root->right;
    // root->right = tmp;
    swap(root->left, root->right);
}

int findIdx(int arr[], int be, int en, int x) {
    while (be <= en) {
        if (arr[be] == x) return be;
        ++be;
    }
    return -1;
}

bool isBST(Node * root, int minVal, int maxVal) {
    if (root == NULL) {
        return true;
    }

    if (root->data < minVal || root->data > maxVal) {
        return false;
    }

    // bool leftAns = isBST(root->left, minVal, root->data);
    // bool rightAns = isBST(root->right, root->data, maxVal);
    // return (leftAns && rightAns);
    //remember that meme

    return isBST(root->left, minVal, root->data) &&
           isBST(root->right, root->data, maxVal);
}

bool isBalanced(Node * root) {
    if (root == NULL) {
        return true;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);
    int diff = abs(leftHt - rightHt);
    return (diff <= 1) && isBalanced(root->left) && isBalanced(root->right);
}

typedef pair<bool, int> bi;  //first = isBalance, second = height

pair<bool, int> isBalancedOpt(Node * root) {
    if (root == NULL) {
        pair<bool, int> p(true, 0);
        return p;
    }

    pair<bool, int> leftAns = isBalancedOpt(root->left);
    pair<bool, int> rightAns = isBalancedOpt(root->right);

    pair<bool, int> curAns;
    curAns.second = max(leftAns.second, rightAns.second) + 1;
    int diff = abs(leftAns.second - rightAns.second);
    curAns.first = (diff <= 1) && leftAns.first && rightAns.first;
    return curAns;
}

int postStart = 0;
Node * buildUsingPostOrder(int inOrder[], int inStart, int inEnd, int postOrder[]){
    //creates a tree and also set postStart to the last index used
    if (inStart > inEnd){
        return NULL;
    }

    Node * root = new Node(postOrder[postStart]);
    postStart--;

    int idx = findIdx(inOrder, inStart, inEnd, root->data);
    root->right = buildUsingPostOrder(inOrder, idx + 1, inEnd, postOrder);
    root->left = buildUsingPostOrder(inOrder, inStart, idx - 1, postOrder);
    return root;
}



int main() {
    // Node * root = createTreeLevel();
    // printLevel2(root);
    // cout << "==========================\n";

    // int ans = countNodes(root);
    // cout << ans << endl;

    // int ans = diameter(root);
    // cout << ans << endl;

    // Pair p = diameterOpt(root);
    // cout << p.height << " " << p.dia << endl;

    // mirror(root);
    // printLevel2(root);

    // const int inf = 1000000000;
    // // INT_MAX;
    // bool ans = isBST(root, -inf, +inf);
    // // bool ans = isBST(root, INT_MIN, INT_MAX);
    // cout << ans << endl;

    // bool ans = isBalanced(root);
    // cout << ans << endl;


    // pair<bool, int> ans = isBalancedOpt(root);
    // cout << ans.first << " " << ans.second << endl;

    int inOrder[] = {13, 120, 8, -4, 100, 3, 50, 6, 7};
    int postOrder[] = {13, 8, -4, 120, 3, 6, 7, 50, 100};
    int n = 9;

    postStart = 8;
    Node * ans = buildUsingPostOrder(inOrder, 0, 8, postOrder);
    printLevel2(ans);



}