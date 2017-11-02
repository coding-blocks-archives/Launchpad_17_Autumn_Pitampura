// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Pair {
public:
    int wt;
    int v;
    Pair(int n, int w){
        v = n;
        wt = w;
    }
};

class comparePair {
public:
    bool operator()(const Pair& A, const Pair& B){
        //should A come before B
        //Heap : Last element is popped

        //effectively : A should come after B
        if (A.wt < B.wt) return false;
        return true;
    }
};

class Graph {
    vector<vector<Pair> > adjList;
    int nv;

public:
    Graph(int n){
        nv = n;
        adjList.resize(nv + 1);
    }

    void addEdge(int src, int dest, int wt){
        adjList[src].push_back(Pair(dest, wt));
        adjList[dest].push_back(Pair(src, wt));
    }

    int dijkstra(int src, int dest){
        const int inf = 1e7;
        vector<int> dist(nv, inf);       

        priority_queue<Pair, vector<Pair>, comparePair> pq;

        pq.push(Pair(src, 0));
        dist[src] = 0;

        while(pq.empty() == false){
            Pair cur = pq.top();
            pq.pop();

            int cvtx = cur.v;
            int wt = cur.wt;

            if (dist[cvtx] < wt) continue;
            
            dist[cvtx] = wt;

            for(int i = 0; i < adjList[cvtx].size(); ++i){
                Pair ngbr = adjList[cvtx][i];
                
                int wtFromSrc = ngbr.wt + dist[cvtx];
                if (wtFromSrc > dist[ngbr.v]) continue;

                pq.push(Pair(ngbr.v, wtFromSrc));
            }
        }

        for(int i = 1; i <= nv; ++i){
            cout << dist[i] << " ";
        }
        cout << endl;
        
        return dist[dest];
    }

};

int main() {
    Graph g(7);

    g.addEdge(1, 2, 10);
    g.addEdge(1, 3, 80);
    g.addEdge(2, 5, 20);
    g.addEdge(2, 3, 6);
    g.addEdge(3, 4, 70);
    g.addEdge(5, 6, 50);
    g.addEdge(5, 7, 10);
    g.addEdge(6, 7, 5);

    cout << g.dijkstra(1, 5);

}