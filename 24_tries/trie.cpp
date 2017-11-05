// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
#include <cstring>
using namespace std;

class TrieNode {
public:
    bool isTerminal;
    TrieNode* letters[26];
    char sirName[100];

    TrieNode(){
        isTerminal = false;
        memset(letters, NULL, sizeof letters);
    }
};

class Trie {
    TrieNode * root;

    TrieNode* insert(TrieNode* root, char arr[], int be, char lastName[]){
        if (root == NULL){
            root = new TrieNode();
        }

        if (arr[be] == '\0'){
            root->isTerminal = true;
            strcpy(root->sirName, lastName);
            return root;
        }

        TrieNode * &nextRoot = root->letters[arr[be] - 'a'];
        nextRoot = insert(nextRoot, arr, be + 1, lastName);
        return root;
    }


    TrieNode* search(TrieNode * root, char arr[], int be){
        if (root == NULL) return NULL;

        if (arr[be] == '\0') return root;

        return search(root->letters[arr[be] - 'a'], arr, be + 1);
    }

public:
    Trie(){
        root = new TrieNode();
        root->isTerminal = true;
    }

    void insert(char arr[], char lastName[]){
        insert(root, arr, 0, lastName);
    }

    char* search(char arr[]){
        TrieNode* ans = search(root, arr, 0);
        if (ans == NULL) return "";
        return ans->sirName;
    }
};

int main() {
    Trie T;

    char a[100];
    char b[100];

    int x = 5;
    while(x--){
        cin >> a >> b;
        T.insert(a, b);
    }

    char toSearch[100];
    while(cin >> toSearch){
        cout << T.search(toSearch);
    }

    // T.insert("Deepak", "Aggarwal");
    // T.insert("Coding", "Blocks");

    // cout << T.search("Deepak") << endl;
    cout << T.search("Codi") << endl;
}