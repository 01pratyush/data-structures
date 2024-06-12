#include <bits/stdc++.h>
#include "maxHeap.cpp"
#include "minHeap.cpp"
using namespace std;

int main() {
    int A[] = {  0 , 4 , 5 , 1 , 7 , 2 , 11};
    int N = 6;
    for ( int i = 0 ; i <= N ; i ++) cout << A[i] << " ";
    cout << endl;

    cout << "Ignore the element at Index 0." << endl;

    cout << "MAX HEAP : ";
    build_maxHeap(A , N);

    for ( int i = 0 ; i <= N ; i ++) cout << A[i] << " ";
    cout << endl;

    cout << "MIN HEAP : ";
    build_minHeap(A , N);

    for ( int i = 0 ; i <= N ; i ++) cout << A[i] << " ";
    cout << endl;

}
