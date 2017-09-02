//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
int main(){
	int ndigits = 0;
	int nws = 0;	//nWhiteSpace
	int other = 0;
	int alpha = 0;
	int cnt = 0;

	char ch;
	while(true){
		// cin >> ch;	//Oops! Wrong!!!
		cin.get(ch);
		if (ch == '$') break;

		//if alpha then inc alpha
		//if digit then nDigit
		//and so on ....
		if (ch >= '0' && ch <= '9') ++ndigits;
		else if (ch == ' ' || ch == '\n' || ch == '\t') ++nws;
		else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) ++alpha;
		else other++;

		++cnt;

	}	
	cout << "digits " << ndigits << endl;
	cout << "alpha " << alpha << endl;
	cout << "whitespace " << nws << endl;
	cout << "others " << other << endl;
}