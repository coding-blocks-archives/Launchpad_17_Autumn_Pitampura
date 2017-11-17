// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
#include <queue>
using namespace std;

int timeToBurn(char mat[][20], int M, int N, int sr, int sc) {
    int rowDir[] = { -1, -1, 0, +1, +1, +1, 0, -1};
    int colDir[] = {0, +1, +1, +1, 0, -1, -1, -1};

    bool visited[20][20] = {};

    queue<int> ri;
    queue<int> ci;

    ri.push(sr);
    ci.push(sc);
    visited[sr][sc] = true;

    int timeReq = 0;

    ri.push(-1);
    ci.push(-1);

    while (ri.empty() == false) {
        int curRow = ri.front();
        int curCol = ci.front();
        ri.pop();
        ci.pop();

        if (curRow == -1) {
            ++timeReq;
            if (ri.empty() == false) {
                ri.push(-1);
                ci.push(-1);
            }
        }

        for (int d = 0; d < 8; ++d) {
            int x = curRow - rowDir[d];
            int y = curCol - colDir[d];
            if (x >= M || x < 0 || y < 0 || y >= N) continue;
            if (!visited[x][y] && mat[x][y] == 'T') {
                visited[x][y] = true;
                ri.push(x);
                ci.push(y);
            }

        }
    }
    return timeReq;
}

void input(char mat[][20], int m, int n) {
    for (int r = 0; r < m; ++r) {
        for (int c = 0; c < n; ++c) {
            cin >> mat[r][c];
        }
    }
}

void output(char mat[][20], int m, int n) {
    for (int r = 0; r < m; ++r) {
        for (int c = 0; c < n; ++c) {
            cout << mat[r][c];
        }
        cout << endl;
    }
    cout << endl;
}



int main() {
    char mat[20][20];
    
    int M, N;
    cin >> M >> N;
    
    int sr, sc;
    cin >> sr >> sc;

    input(mat, M, N);
    output(mat, M, N);

    int ans = timeToBurn(mat, M, N, sr, sc);
    cout << ans ;

}