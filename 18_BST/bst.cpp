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

Node * insert(Node * root, int x) {
    if (root == NULL) {
        root = new Node (x);
        return root;
    }


    if (x > root->data) {
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

void printRange(Node * root, int k1, int k2) {
    if (root == NULL) {
        return;
    }

    if (root->data >= k1 && root->data <= k2) {
        cout << root->data << " ";
    }

    if (k2 < root->data) {
        printRange(root->left, k1, k2);
    }
    else if (k1 > root->data) {
        printRange(root->right, k1, k2);
    }
    else {
        printRange(root->left, k1, root->data);
        printRange(root->right, root->data, k2);
    }
}

Node * searchBst(Node* root, int x) {
    if (root == NULL) return NULL;

    if (root->data == x) {
        return root;
    }

    if (x < root->data) {
        return searchBst(root->left, x);
    }
    else {
        return searchBst (root->right, x);
    }
}

class PairLL {
public:
    Node * head;
    Node* tail;
    PairLL() {
        head = NULL;
        tail = NULL;
    }
};

PairLL bst2LL(Node * root) {
    //Written on 22-Oct-17
    if (root == NULL) {
        PairLL emptyPair;
        emptyPair.head = NULL;  //just to make it explicit
        emptyPair.tail = NULL;
        return emptyPair;
    }

    PairLL leftLL = bst2LL(root->left);
    PairLL rightLL = bst2LL(root->right);

    PairLL ans; //default (NULL, NULL)

    if (leftLL.head) {
        ans.head = leftLL.head;
        leftLL.tail->right = root;
        root->left = leftLL.tail;
    } else {
        ans.head = root;
        root->left = NULL;  //just to make explicit
    }

    //setting the tail of LL
    if (rightLL.head) {
        ans.tail = rightLL.tail;
        rightLL.head->left = root;
        root->right = rightLL.head;
    } else {
        ans.tail = root;
        root->right = NULL; //by default also, its NULL
    }
    return ans;
}

void printLL(Node * head) {
    if (head == NULL) {
        return;
    }

    cout
            << "<--(" << (head->left ? head->left->data : 0) << ")"
            << head->data
            << "(" << (head->right ? head->right->data : 0) << ")-->";

    printLL(head->right);
}


int main() {

    Node * root = createBST();
    printLevel2(root);

    // printRange(root, 15, 32);

    // int x; cin >> x;
    // Node * ans = searchBst(root, x);
    // cout << ans << " ";
    // if (ans) cout << ans->data
    // cout << endl;


    PairLL ans = bst2LL(root);
    printLL(ans.head);
}