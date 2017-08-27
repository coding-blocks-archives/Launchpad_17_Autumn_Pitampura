//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
	int N;
	int x;
	cin >> N;	//N has been read
	// int cnt = 0;
	int i  = 1;	//current no being read

	const int inf = (int)1e6;

	int smallest = inf;
	int largest = -inf;
	int sum = 0;

	while (i <= N) {
		cin >> x;	//i th no has been read
		++i;

		//check for smallest
		if (x < smallest) {
			//update
			smallest = x;
		}

		//check for largest
		if (x > largest) {
			largest = x;
		}

		sum = sum + x;
	}

	cout << "Largest is " << largest << endl;
	cout << "smallest is " << smallest << endl;

	// int mean = sum / N;	//WRONG!!! (1 + 2) / 2 = 1
	double mean = (double)sum / N;
	cout << "mean is " << mean << endl;
}