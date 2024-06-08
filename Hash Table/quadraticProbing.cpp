#include <bits/stdc++.h>
using namespace std;


//It is assumed that the hash function returns an index such that 0 <= index <= 19
string hashTable[20];
int hashTableSize = 20;

int hashFunc(string obj) {
    //dummy hash function
}

//Insert
void insert(string obj) {
    int idx = hashFunc(obj);

    int h = 1;
    while (hashTable[idx]!= "") {
        idx = (idx + h*h)%hashTableSize;
        h++;
    }

    hashTable[idx] = obj;
}

//Search
void search(string obj) {
    int idx = hashFunc(obj);

    int h = 1;
    while (hashTable[idx]!="" && hashTable[idx]!=obj) {
        idx = (idx + h*h) % hashTableSize;
        h++;
    }

    if (hashTable[idx]==obj) cout << obj << "is found" << endl;
    else cout << obj << "is not found" << endl;
}

