//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

//function definition
void printInc(int num){	//positional mapping
	for(int i = 0; i < num; ++i){
		cout << i << " ";
	}

}

int main(){
	int M;
	cin >> M;
	for(int i = 0; i < M; ++i){
		int N;
		cin >> N;
		printInc(N);	//calling a function 
		//using our machine

		cout << endl;
	}	
}