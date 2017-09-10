//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

int factorial(int n){
	int res = 1;
	for(int i = 2; i <= n; ++i) res = res * i;
	return res;
}

int nCr(int n, int r){
	int nFact = factorial(n);
	int rFact = factorial(r);
	int nrFact = factorial(n - r);
	int ans = (nFact / rFact) / nrFact;
	// int ans = nFact / (rFact * nrFact);
	return ans;
}


int main(){
	int n, r;
	cin >> n >> r;
	int ans = nCr(n, r);	//calling/invocation
	cout << ans;		
}