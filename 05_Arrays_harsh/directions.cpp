#include<iostream>
using namespace std;

int main(){
	char ch;
	int n=0,s=0,w=0,e=0,i;

	//count number of 'E','W','N','S' inputted by the user
	while(true){
		cin.get(ch);
		if(ch!='E' && ch!='N' && ch!='S' && ch!='W'){
			break;
		}
		if(ch=='N')
			{n++;}
		if(ch=='W'){
			w++;
		}
		if(ch=='S')
			s++;
		if(ch=='E')
			e++;
	}
	int west=w-e,east=e-w,north=n-s,south=s-n;
	cout<<endl;

	//this loop will run only when numberOfE's > numberOfW's
	//something similar happens for all the 4 loops below
	for( i=0;i<east;i++){
		cout<<"E";
	}
	for(i=0;i<north;i++){
		cout<<"N";
	}
	for(int i=0;i<south;i++){
		cout<<"S";
	}
	for(int i=0;i<west;i++){
		cout<<"W";
	}
	cout<<endl;
	return 0;
}