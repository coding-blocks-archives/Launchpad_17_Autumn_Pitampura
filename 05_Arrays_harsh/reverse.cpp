#include<iostream>
using namespace std;

int main(){
	int arr[10];
	cout<<"Enter 5 elements : ";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	//start index from n-1, go upto 0 and print them
	for(int i=4;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	return 0;
}
