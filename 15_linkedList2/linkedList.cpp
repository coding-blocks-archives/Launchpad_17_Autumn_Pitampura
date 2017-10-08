//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node * next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

Node * createLL() {
    //create until u get -1
    Node * head = NULL;
    Node * tail = NULL;
    int x;
    while (true) {
        cin >> x;
        if (x == -1) break;

        //Car C
        //Car * C = new Car();
        Node * newNode = new Node(x); //ctor auto invoked
        if (head == NULL) {
            //this means newNode is the first Node
            head = newNode;
            tail = newNode;
        }
        else {
            //some node(s) already exists
            // tail.next = newNode; //wrong
            // (*tail).next = newNode;
            tail->next = newNode;
            tail = tail->next;
        }
    }
    // tail->next = head; //cycle detection
    return head;
}

void printLL(Node * head) {
    Node * cur = head;
    while (cur != NULL) {
        cout << cur->data << "-->";
        cur = cur->next;
    }
    cout << endl;
}

int lengthLL(Node * head) {
    int cnt = 0;
    Node * cur = head;
    while (cur) {
        cur = cur->next;
        ++cnt;
    }
    return cnt;
}

Node * findEle(Node * head, int x) {
    if (head == NULL) return NULL;

    if (head->data == x) return head;   //head must exist??

    return findEle(head->next, x);
}

Node * midPt(Node * head) {
    int len = lengthLL(head);
    int pos = len / 2;
    Node * tmp = head;
    while (pos > 0) {
        tmp = tmp->next;
        --pos;
    }
    return tmp;
}

Node * midPtOpt(Node * head) {
    //SET
    Node * slow = head;
    Node * fast = head;

    //GO
    while (slow && fast && fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node * bubbleSort(Node * head) {
    int len = lengthLL(head);

    for (int i = 0; i < len ; ++i) {
        Node * prevNode = NULL;
        Node * cur = head;
        while (cur && cur->next) {
            Node * ahead = cur->next;
            if (cur->data > ahead->data) {
                if (cur == head) {
                    head = ahead;
                    prevNode = ahead;
                    cur->next = ahead->next;
                    ahead->next = cur;
                    // ahead = cur->next;
                }
                else {
                    cur->next = ahead->next;
                    prevNode->next = ahead;
                    ahead->next = cur;
                    prevNode = ahead;
                    // ahead = cur->next;
                }
            }
            else {
                prevNode = cur;
                cur = cur->next;
            }
        }
    }
    return head;
}


Node * find5Last(Node * head) {
    int pos = 5;
    Node * tmp = head;

    while (pos > 0 && tmp) {
        tmp = tmp->next;
        --pos;
    }

    Node * back = head;
    Node * ahead = tmp;
    while (back && ahead) {
        back = back->next;
        ahead = ahead->next;
    }
    if (ahead == NULL) return NULL; //5 nodes are NOT there in LL
    return back;
}


Node * mergeSorted(Node * A, Node * B) {
    if (A == NULL) {
        return B;
    }
    if (B == NULL) return A;

    Node * ans = NULL;
    if (A->data < B->data) {
        ans = A;
        ans->next = mergeSorted(A->next, B);
    } else {
        ans = B;
        ans->next = mergeSorted(A, B->next);
    }
    return ans;
}

Node * mergeSort(Node * head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node * mid = midPtOpt(head);
    Node * aheadOfMid = mid->next;
    mid->next = NULL;

    Node * A =  head;
    Node * B = aheadOfMid;
    A = mergeSort(A);
    B = mergeSort(B);
    Node * ans = mergeSorted(A, B);
    return ans;
}

Node * reverseIter(Node * head) {
    Node * cur = head;
    Node * prevNode = NULL;
    while (cur) {
        Node * ahead = cur->next;
        cur->next = prevNode;
        prevNode = cur;
        cur = ahead;
    }
    return prevNode;
}

bool detectCycle(Node * head) {
    Node * slow = head;
    Node * fast = head;
    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }
    return slow == fast;
}

Node * kReverse(Node * head, int K) {
    if (head == NULL || head->next == NULL) return head;

    int i = 0;
    Node * tmp = head;
    while (i < K - 1 && tmp) {
        tmp = tmp->next;
        ++i;
    }
    Node * ahead = tmp->next;
    tmp->next = NULL;
    Node * smallReverse = reverseIter(head);
    head->next = kReverse(ahead, K);
    return smallReverse;
}

int main() {
    Node * head = createLL();
    printLL(head);

    // cout << lengthLL(head) << endl;

    // Node * ans = findEle(head, 2);
    // cout << ans << " " << ans->data << endl;

    // Node * ans = midPt(head);
    // cout << ans << " " << ans->data << endl;

    // Node * ans = midPtOpt(head);
    // cout << ans << " " << ans->data << endl;

    // head = bubbleSort(head);
    // printLL(head);

    // Node * ans = find5Last(head);
    // cout << ans << " " << ans->data << endl;

    // Node * head2 = createLL();
    // printLL(head2);

    // Node * ans = mergeSorted(head, head2);
    // printLL(ans);

    // Node * ans = mergeSort(head);
    // printLL(ans);

    // Node * ans = reverseIter(head);
    // printLL(ans);


    // bool ans = detectCycle(head);
    // cout << ans ;

    head = kReverse(head, 2);
    printLL(head);
}
