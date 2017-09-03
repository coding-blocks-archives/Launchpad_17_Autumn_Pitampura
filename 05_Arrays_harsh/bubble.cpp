//The largest element bubbles out at the end of the array
#include <iostream>
using namespace std;

int main(){
	int arr[20];
	int n;
	cout<<"Enter number of elements : ";
	cin>>n;
	cout<<"Enter elements : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//we have to bubble out n-1 largest elements
	//last element will be at its right position
	//so i goes upto n-2 (remember array indexing starts at 0)
	//0 to n-2 = n-1 elements
	for(int i=0;i<n-1;i++){
		//we will compare jth element with its next element
		//if arr[j] is larger, then swap it with arr[j+1]
		for(int j=0;j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}	
	}
	//print out the sorted array
		for(int k=0;k<n;k++){
			cout<<arr[k]<<" ";
		}
		cout<<endl;
	return 0;
}
