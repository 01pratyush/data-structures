#include <bits/stdc++.h>
using namespace std;

//It is assumed that the hashTable returns an index such that 0 <= index <= 19
string hashTable[20];
int hashTableSize = 20;

int hashFunc(string obj) {
    //dummy hash function
}

//Insert
void insert(string obj) {
    int idx = hashFunc(obj);

    while (hashTable[idx]!="") idx = (idx +1) % hashTableSize;

    hashTable[idx] = obj;
}

//Search
void search(string obj) {
    int idx = hashFunc(obj);

    while (hashTable[idx]!="" && hashTable[idx]!=obj) idx = (idx +1)%hashTableSize;

    if (hashTable[idx]=="") cout << obj << "is not found"  << endl;
    else cout << obj << "if found" << endl;
}