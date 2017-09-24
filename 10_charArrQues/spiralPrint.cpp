//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

void inputMat(char arr[][20], int M, int N) {
    for (int i = 0; i < M; ++i) {
        for (int c = 0; c < N; ++c) {
            cin >> arr[i][c];
        }
    }
}

void spiralPrint(char mat[][20], int M, int N) {
    int startRow = 0;
    int endRow = M - 1;
    int startCol = 0;
    int endCol = N - 1;

    while (startRow <= endRow && startCol <= endCol) {
        //lets print the starting row
        for (int c = startCol; c <= endCol; ++c) {
            cout << mat[startRow][c];
        }
        ++startRow;

        //print the endCol
        for (int r = startRow; r <= endRow; ++r) {
            cout << mat[r][endCol];
        }
        --endCol;

        //print the lastRow
        for (int c = endCol;  startRow < endRow && c >= startCol; --c) {
            cout << mat[endRow][c];
        }
        --endRow;

        //print the first col
        for (int r = endRow; startCol <= endCol && r >= startRow; --r) {
            cout << mat[r][startCol];
        }
        ++startCol;
    }
}


int main() {
    char mat[20][20];
    int M, N;
    cin >> M >> N;
    inputMat(mat, M, N);
    spiralPrint(mat, M, N);

}