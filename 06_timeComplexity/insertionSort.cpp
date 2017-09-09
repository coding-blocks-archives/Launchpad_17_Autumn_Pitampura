//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	int N;	//N is the no of elements user wants to enter
	cin >> N;

	// int arr[N];		//WRONG!!! N has to be a constant
	int arr[100];		//User must enter less than 100 elements

	//input N elements from usr
	for(int i = 0; i < N; ++i) cin >> arr[i];

	//INSERTION SORT begins...
	//start from the second element or sort all elements from [1, N-1]
	for(int i = 1; i < N ; ++i){
		int curEle = arr[i];
		int st = i - 1;	//st is the start of the range towards left
		//while I can shift, I will shift
		while(st >= 0){
			if (arr[st] > curEle){
				arr[st + 1] = arr[st];	//shifting
				--st;	//move to left
			}
			else{
				break;
				//means we have found an element smaller than curEle
				//which is located at st
				//It means the curEle must be inserted at st+1
			}
		}
		arr[st + 1] = curEle;
	}

	//Bingo!!! The array must be sorted as of now
	for(int i = 0; i < N; ++i) cout << arr[i] << " ";

	return 0;	//Ignore for now.
}