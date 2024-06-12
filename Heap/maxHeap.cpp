#include <bits/stdc++.h>
using namespace std;

void max_heapify(int A[] , int i , int N) {
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if (left <= N && A[left] > A[i]) largest = left;
    
    if (right <= N && A[right] > A[largest]) largest = right;

    if (largest!=i) {
        swap(A[i] , A[largest]);
        max_heapify(A , largest , N);
    }
}

void build_maxHeap(int A[] , int N) {
    
    for ( int i = N/2 ; i >=1 ; i --) {
        max_heapify(A , i , N);
    }
}