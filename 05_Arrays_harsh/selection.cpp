//select the minimum element from the array and swap it to the beginning of array
#include<iostream>
using namespace std;

int main(){
	int arr[100];
	int i,n;
	cout<<"Enter number of elements : ";
	cin>>n;
	cout<<"Enter elements : ";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int minimum,idx;
	for(int i=0;i<n;i++){
		//assumed that ith number is the minimum number
		//we need idx because we want to access that number for swapping
		minimum=arr[i];
		idx=i;
		//from the remaining array, find the minimum element
		for(int j=i+1;j<n;j++){
			if(arr[j] < minimum){
				//update minimum and idx
				minimum=arr[j];
				idx=j;
			}
		}
		//swap the ith element with the minimum element found from the ith to (n-1)th elements
		int temp=arr[i];
		arr[i]=arr[idx];
		arr[idx]=temp;
	}
	//print the array
	for(int k=0;k<n;k++){
		cout<<arr[k]<<" ";
	}
	cout<<endl;

	return 0;
}
