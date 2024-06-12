#include <bits/stdc++.h>
using namespace std;

void min_heapify(int A[], int i , int N) {
    int smallest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if (left <= N && A[left] < A[i]) smallest = left;

    if (right <= N && A[right] > A[smallest]) smallest = right;

    if (smallest!=i) {
        swap(A[i] , A[smallest]);
        min_heapify(A , smallest , N);
    }
}

void build_meanHeap(int A[] , int N) {

    for ( int i = N/2 ; i >=1 ; i--) {
        
        min_heapify(A , i , N);
    }
}