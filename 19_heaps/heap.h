#ifndef HEAP_H
#define HEAP_H

#include <vector>
using namespace std;

class Heap {
private:    //by default
    vector<int> v; //size of v is zero; v[10] is an ERROR!
    int sze;

    int parent(int i) { return i / 2;}
    int left(int i)   { return i * 2;}
    int right(int i)  { return i * 2 + 1;}

    void heapify(int i){
        int smallest = i;

        if (left(i) <= sze && v[left(i)] < v[smallest]){
            smallest = left(i);
        }

        if (right(i) <= sze && v[right(i)] < v[smallest]){
            smallest = right(i);
        }

        if (smallest != i){
            swap(v[smallest], v[i]);
            heapify(smallest);
        }
    }

public:
    Heap() {
        sze = 0;
        v.push_back(-1);    //arbitary element:sentinel
    }

    void push(int ele) {
        //insert an element in the heap
        v.push_back(ele);
        ++sze;

        int curIdx = sze;

        while (curIdx > 1 && v[curIdx] < v[parent(curIdx)]){
            swap(v[curIdx], v[parent(curIdx)]);
            curIdx = parent(curIdx);
        }
    }

    void pop(){
        if (sze <= 0) return;

        swap(v[1], v[sze]);

        v.pop_back();
        --sze;

        heapify(1);
    }

    int top(){
        if (sze < 1) return 1000000000;
        return v[1];
    }

    int size(){
        return sze;
    }
};

#endif