// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <vector>
#include <iostream>
using namespace std;

class Graph{
    vector<vector<int> > v;
    int nv;

public:
    Graph(int n){
        v.resize(n + 1);
        nv = n;
    }

    void addEdge(int src, int dest){
        v[src].push_back(dest);
        v[dest].push_back(src);
    }

    


};

int main() {
    Graph g(5);

    g.addEdge(1, 2);
    g.addEdge(2, 4);
    g.addEdge(4, 5);
    g.addEdge(1, 4);
    g.addEdge(1,3);
    
}