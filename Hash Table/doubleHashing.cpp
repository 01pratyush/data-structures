#include <bits/stdc++.h>
using namespace std;

//It is assumed that hash function returns an index such that 0 <= index <= 19
string hashTable[20];
int hashTableSize = 20;

int hashFunc1(string obj) {
    //dummy hash function
}

int hashFunc2(string obj) {
    //dummy hash function
}

//Insert
void insert(string obj) {
    int index1 = hashFunc1(obj);
    int index2 = hashFunc2(obj);
    int h = 1;
    while(hashTable[index1]!="") {
        index1 = (index1 + h*index2)%hashTableSize;
        h++;
    }

    hashTable[index1] = obj;
}

//Search
void search(string obj) {
    int index1 = hashFunc1(obj);
    int index2 = hashFunc2(obj);
    int h = 1;

    while(hashTable[index1]!="" && hashTable[index1]!=obj) {
        index1 = (index1 + h*index2)%hashTableSize;
        h++;
    }

    if (hashTable[index1] == obj) cout << obj << "is found" << endl;
    else cout << obj << "is not found" << endl;
}

