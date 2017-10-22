// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <queue>
#include <iostream>
using namespace std;

class Compartor{
public:
    bool operator()(int a, int b){
        // should a appear before b??
        // top is the element which is in the last of the array
        if (a < b) return false;
        return true;

    }
};

int main() {

    priority_queue<int, vector<int>, Compartor> pq;

    pq.push(2);
    pq.push(3);
    cout << pq.top();

    char choice;
    int x;

    cin >> choice;
    while (choice != 'E') {
        switch (choice) {
        case 'A' :
            cin >> x;
            pq.push(x);
            break;
        case 'D' :
            if (pq.empty() == false) {
                pq.pop();
                cout << "Deleted Max Element\n";
            } else {
                cout << "No Element to delete\n";
            }
            break;
        case 'S' :
            cout << pq.top();
            break;
        }
        cin >> choice;
    }

}