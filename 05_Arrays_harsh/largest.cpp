#include <iostream>
using namespace std;

int main(){
	int arr[100];
	int n,i;
	cout<<"Enter number of elements : ";
	cin>>n;
	cout<<"Enter elements : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//assume the first element to be the largest
	int largest=arr[0];
	for(int i=1;i<n;i++){
		//compare the ith element with largest
		//change value of largest if ith element is larger than largest
		if(arr[i] > largest)
			largest=arr[i];
	}
	cout<<"Largest number is : "<<largest;
	return 0;
}
