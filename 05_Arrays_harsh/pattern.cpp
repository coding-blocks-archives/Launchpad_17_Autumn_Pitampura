#include <iostream>
using namespace std;

int main(){
	int nLines,curLines=1;
	cin>>nLines;
		int i;
	while(curLines<=nLines){
		//To print first pattern
		for(i=0;i<curLines;i++){
			cout<<"*";
		}
		cout<<" ";
		//To print second pattern
		int numOfSecondStars=nLines-curLines+1;
		for(i=0;i<numOfSecondStars;i++){
			cout<<"*";
		}
		//Exactly similar to second pattern
		cout<<" ";
		for(i=0;i<numOfSecondStars;i++){
			cout<<"*";
		}
		cout<<" ";
		//Exactly similar to first pattern
		for(i=0;i<curLines;i++){
			cout<<"*";
		}
		cout<<endl;
		curLines++;
	}
	return 0;
}
