#include <bits/stdc++.h>
#include "../Heap/minHeap.cpp"
using namespace std;

int length = 0; //Keeps a track on the length of the priority queue(not same as the length of array A).
int A[50];

int minimum(int A[]) {
    if (length==0) {
        cout << "Priority Queue is empty!";
        return -1;
    }

    return A[1];
}

int extract_minimum(int A[]) {
    if (length==0) {
        cout << "Priority Queue is already empty !";
        return -1;
    }

    int value = A[1];
    A[1] = A[length];
    length--;

    min_heapify(A , 1 , length);

    return value;
}

void insert_val(int A[] , int val) {
    length++;
    A[length] = val;
    int i = length;

    while ( i > 1 && A[i/2] < A[i]) {
        swap(A[i/2] , A[i]);
        i = i/2;
    }
}