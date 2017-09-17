//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

void input2d(int arr[][5], int M, int N){
	//read elements of matrix
	for(int i = 0; i < M; ++i){
		for(int j = 0; j < N; ++j){
			cin >> arr[i][j];
		}
	}	
}



int main(){
	int mat[5][5];
	int M, N;
	cin >> M >> N;

	input2d(mat, M, N);

	//search
	int x;	cin >> x;

	for(int i = 0; i < M; ++i){
		for(int j = 0; j < N; ++j){
			if (mat[i][j] == x){
				cout << i << " " << j << endl;
				break;
			}
		}
	}

	return 0;
}