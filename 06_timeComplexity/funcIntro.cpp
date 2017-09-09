//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	int M;	//no of times
	cin >> M;

	for(int curIt = 0; curIt < M; ++curIt){
		//read N
		//print N numbers
		int N;
		cin >> N;
		for(int i = 0; i < N; ++i){
			cout << i << " ";
		}
		cout << endl;
	}	
}