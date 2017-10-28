// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
#include <string>
using namespace std;

class Node{
public:
    string key;
    string phoneNo;
    Node * next;

    Node(const string& k, const string& p){
        key = k;    //if array strcpy(key, k)
        phoneNo = p;
        next = NULL;
    }
};

class Hashmap {
    Node* *table;
    int tableSize;
    int numNodes;

    int hashFunction(const string & s){
        int &size = tableSize;
        int mul = 1;
        int hashCode = 0;
        for(int i = 0; i < s.size(); ++i){
            char curChar = s[i];
            int x = ((curChar % size) * (mul % size)) % size;
            hashCode = (hashCode + x) % size;
            mul = (mul % size * mul % size) % size;
        }
        return hashCode;
    }


    void insertIntotable(int idx, Node * nodeToInsert){
        Node * head = table[idx];
        //insert into ll
        nodeToInsert->next = head;
        table[idx] = nodeToInsert;  // insertion in the beginning
    }

    double loadFactor(){
        return (double)numNodes / tableSize;

    }

    void rehash(){
        Node* * oldTable = table;
        int oldSize = tableSize;
        tableSize = 2 * oldSize;
        table = new Node*[tableSize]{NULL, }; //Null initialised

        for(int listNo = 0; listNo < oldSize; ++listNo){
            Node * curList = oldTable[listNo];

            while(curList){
                int idx = hashFunction(curList->key);   //idx for new table
                Node * remList = curList->next;
                insertIntotable(idx, curList);
                curList = remList;
            }
        }
        delete [] oldTable;

    }

public:
    Hashmap(){
        tableSize = 7;
        table = new Node*[tableSize]{}; //initalises array to NULL
        numNodes = 0;
    }

    void insert(const string& s, string p){
        int idx = hashFunction(s);
        Node * newNode = new Node(s, p);

        insertIntotable(idx, newNode);
        ++numNodes;

        if (loadFactor() > 0.7) rehash();
    }

    void remove(string& s){
        int idx = hashFunction(s);
         Node * head = table[idx];

         //remove from list
         Node * prevNode = NULL;
         Node * ahead = NULL;

         while(head){
            ahead = head->next;

            if (head->key == s){
                if (prevNode == NULL){
                    table[idx] = ahead;
                }
                else {
                    prevNode->next = ahead;
                }
                delete head;
                return;
            }
            prevNode = head;
            head = ahead;
         }
    }

    string value(const string& s){
        int idx = hashFunction(s);

        Node * head = table[idx];
        Node * cur = head;

        while(cur){
            if (cur->key == s){
                return cur->phoneNo;
            }
            cur = cur->next;
        }
        return "";
    }

    ~Hashmap(){
        for(int i = 0; i < tableSize; ++i){
            Node * head = table[i];
            while(head){
                Node * nextNode = head->next;
                delete head;
                head = nextNode;
            }
        }
        delete [] table;
    }

    void printHashmap() const { //data members WILL NOT be updated
        for(int i = 0; i < tableSize; ++i){
            cout << "table[" << i << "]\t-->";

            Node * curList = table[i];
            while(curList){
                cout << curList->key << "(" << curList->phoneNo << ")-->";
                curList = curList->next;
            }
            cout << endl;
        }
    }

};


int main() {
    Hashmap h;
    h.insert("abc", "99212");
    h.insert("def", "4324");
    h.insert("i", "444");
    h.printHashmap();
    cout << endl;
    // cout << h.value("abc");

    
}