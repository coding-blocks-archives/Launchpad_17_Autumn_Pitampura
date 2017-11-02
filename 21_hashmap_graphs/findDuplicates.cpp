// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <map>
#include <iostream>
using namespace std;

//HW; Improve this function to print duplicates exactly once
void printDuplicates(int a[], int n){
    map<int, int> m;

    for(int i = 0; i < n; ++i){
        //check if curElem has already appeared or not
        int key = a[i];
        if (m.find(a[i]) == m.end()){
            m[key] = 1;
        }
        else {
            cout << a[i] << " ";
            m[key]++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; ++i) cin >> arr[i];

    printDuplicates(arr, n);

}