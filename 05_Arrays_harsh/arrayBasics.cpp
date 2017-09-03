#include<iostream>
using namespace std;
int main(){
	//declared an array of integers of size 5
	int i,marks[5];
	marks[0]=45;
	marks[1]=50;
	marks[2]=30;
	marks[3]=-20;
	marks[4]=100;
	// marks[5]=__; //wrong as we cannot access 5th location as
	//it does not exist.
	for(i=0;i<5;i++){
		cout<<"Marks are :"<<marks[i]<<endl;
	}
	return 0;
}