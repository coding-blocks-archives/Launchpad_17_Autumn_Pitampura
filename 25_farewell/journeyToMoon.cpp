// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
vvi adjList;

void addEdge(int src, int dest){
    adjList[src].push_back(dest);
    adjList[dest].push_back(src);
}

vi astroInCountry;
vi visited;

int dfs(int src){
    int cnt = 1;
    visited[src] = true;
   
    for(int i = 0; i < adjList[src].size(); ++i){
        int ngbr = adjList[src][i];
        if (visited[ngbr] == false){
            cnt += dfs(ngbr);
        }
    }
    return cnt;
}

void connectedComponents(int N){
    visited.resize(N, false);
    for(int v = 0; v < adjList.size(); ++v){
        if (visited[v] == false){
            int cnt = dfs(v);
            astroInCountry.push_back(cnt);
        }
    }
}

typedef long long int lli;
lli totalWays(){
    lli n = accumulate(astroInCountry.begin(), astroInCountry.end(), 0LL);
    lli ans = n * (n - 1) / 2 ;
    
    for(int i = 0; i < astroInCountry.size(); ++i){
        lli curNum = astroInCountry[i];
        ans -= curNum * (curNum - 1) / 2;
    }
    return ans;
}


int main() {
    int N; int P;
    cin >> N >> P;
    adjList.resize(N, vi());

    for(int i = 0; i < P; ++i){
        int x, y;
        cin >> x >> y;
        addEdge(x, y);
    }

    connectedComponents(N);
    cout << totalWays();    
}