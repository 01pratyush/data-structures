#include <bits/stdc++.h>
using namespace std;

int hashFunc(char c) {
        return c-'a';
    }

int main() {
    string S = "acdebb";

    //Problem - Count the occurences of each character.

    //Brute Force - For each character , find the number of occurrences using a separate for loop.
    for ( char c = 'a'; c <= 'z' ; c++) {
        int freq = 0;
        for ( int i = 0 ; i < S.size() ; i ++) {
            if (S[i]==c) freq++;
        }

        cout << c << " " << freq << endl;
    }
    //Time Complexity = 0(26*N) 

    //Better Solution - Use a Hash Table
    //We define hash function.
    vector<int> hashTable(26);
    for ( int i = 0 ; i < S.size() ; i ++) {
        int idx = hashFunc(S[i]);

        hashTable[idx]++;
    }

    for ( int i = 0 ; i < hashTable.size() ; i ++) {
        cout << (char)('a' + i) << " " << hashTable[i] << endl;
    }
    //Time Complexity - O(N) for pre-computation and O(1) for searching. 
    //But ended up using some extra space.
}