#include <bits/stdc++.h>
using namespace std;

//It is assumed that the hashTable returns an index such that 0 <= index <= 19
vector<string> hashTable[20];
int hashTableSize = 20;

int hashFunc(string obj){
    //dummy hash function.
}

//Insert
void insert(string obj) {
    int idx = hashFunc(obj);

    hashTable[idx].push_back(obj);
}

//Search
void search(string obj) {
    int idx = hashFunc(obj);

    for ( int i = 0 ; i < hashTable[idx].size() ; i ++) {
        if (hashTable[idx][i]== obj) {
            cout << obj << "is found" << endl;
            return;
        }
    }

    cout << obj << "is not found" << endl;
}