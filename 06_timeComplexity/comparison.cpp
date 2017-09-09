//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include <ctime>
using namespace std;
int main() {

	int N;
	cout << "N ";
	cin >> N;

	time_t beg1 = clock();
	for (int i = 0; i < N; ++i);
	time_t end1 = clock();

	cout << ((double)end1 - beg1);	//total time elapsed by above algo
	cout << endl;

	//Algo 2
	cout << "N ";
	cin >> N;

	time_t beg2 = clock();
	for (int i = 0; i < N; ++i);
	time_t end2 = clock();
	
	cout << ((double) end2 - beg2);


}