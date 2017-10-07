//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com
#include <iostream>
#include <cstring>
using namespace std;

// create class student
class Student{  //we are saying, Hey! Student IS a class
private:        //outer world can't touch these
    int rollNo;
    int marks;
    char name[20];

public:         // outer world can see this...
//But whats the outer world???
//Anything outside class Student, KISS:)
//KISS = Keep it simple stupid!

    Student(int r, const char str[]){ // I am a member function
        //Hey! but I am special
        //Ok! I am a constructor or ctor(short form)
        // ensure that student can only be created if I give rollNo and name
        rollNo = r;
        // name = str;
        strcpy(name, str);
        // marks = 0;  //default
    }

    void assignMarks(int m){ // I am a member function
    // I can assign marks...marks cannot be -ve
        if (m < 0) return;
        marks = m;
    }

    void display(){
        cout << rollNo << " " << name << " " << marks << endl;
    }
};




int main(){
    Student S(22, "John");
    // char *ptr = "abc";
    // cout << S.rollNo;    //ERROR!!!
    S.assignMarks(-2);
    S.display();

    
    
}
