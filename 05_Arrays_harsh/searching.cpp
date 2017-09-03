#include<iostream>
using namespace std;
int main(){
	int arr[100],num;
	bool wasFound=false;
	cout<<"Enter 10 numbers : ";
	for(int i=9;i>=0;i--){
		cin>>arr[i];
	}
	cout<<"Enter number to search : ";
	cin>>num;
	for(int i=0;i<10;i++){
		if(num==arr[i]){
			//0 indexing is for us, not for the user
			//element at index 0 is first element
			cout<<"Location : "<<i+1<<endl;
			wasFound=true;
		}
	}
	//If number wasn't found, tell the user
	if(wasFound==false){
		cout<<"The number you searched for, didn't exist."<<endl;
	}
	cout<<"\n";
	return 0;
}
