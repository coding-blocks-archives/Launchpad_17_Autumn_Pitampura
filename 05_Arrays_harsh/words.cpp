#include<iostream>
using namespace std;

int main(){
	char ch;
	//lines=1, means we assume user is gonna enter 1 line for sure
	int wordsInCurrentLine=0,lines=1,words=0,characters=0;
	while(true){
		//read a character until a '$' is found
		cin.get(ch);
		if(ch=='$')
		{
			break;	
		}
		//if we encounter an enter key, increase count of lines by 1
		if(ch=='\n'){
			lines++;
			//Add words in current line to total number of words
			words=words + wordsInCurrentLine+1;
			//set words in current line =0 as we are gonna enter a new line now
			wordsInCurrentLine=0;
		}
		if(ch==' ' || ch=='\t'){
			//in current line if we encounter a space or tab character,
			//read white space characters until we read a non white space character
			wordsInCurrentLine++;
			while(ch==' '||ch=='\t'){
				cin.get(ch);
				characters++;
			}
		}
		characters++;
	}
	//in the line where the loop encountered a '$', we have to add the number of words in that line too.
	//This is because user wouldn't may not pre
	words=words+ wordsInCurrentLine+1;
	//output the number of words, lines and characters
	cout<<"Words : "<<words<<endl;
	cout<<"lines : "<<lines<<endl;
	cout<<"characters : "<<characters<<endl;
	return 0;
}
