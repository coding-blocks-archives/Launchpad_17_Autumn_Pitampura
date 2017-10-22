// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
#include <vector>
using namespace std;

template <class T>
int mySearch(T arr[], int n, T x) {
    for (int i = 0; i < n; ++i) {
        if (x == arr[i]) {
            return i;
        }
    }
}

template<class T, class Y, class Compare>
T mySearch2(T BE, T EN, Y X, Compare obj) {
    while (BE != EN) {
        // if (*BE == X) {
        if (obj(*BE, X)) {
            return BE;
        }
        ++BE;
    }
}


class Book {
    ;
};

class comparator {
public:
    bool operator()(Book B1, Book B2) {
        return true;
    }
};



class compInt {
public:
    bool operator()(int a, int b) {
        return a < b;
    }
};


class compChar {
public:
    bool operator()(char a, char b) {
        return a < b;
    }
};

int main() {

    int arr[10];

    mySearch(arr, 10, 2);

    char arrCh[10];
    mySearch(arrCh, 10, '2');

    vector<int> v;
    // mySearch(v, 10, 2);

    // mySearch2(arr, arr + 10, 2);    //T = int *
    // mySearch2(v.begin(), v.end(), 2);   //T = vector<int>::iterator

    // vector<Book> vb;
    // Book X;
    // comparator C;
    // mySearch2(vb.begin(), vb.end(), X, C);



    // compInt ci;
    compChar cc;
    // mySearch2(arr, arr + 10, 2, ci);
    mySearch2(arrCh, arrCh + 10, '2', cc);
}