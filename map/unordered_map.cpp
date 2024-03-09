#include<bits/stdc++.h>
using namespace std;

// Some key points about unordered map
// 1. inbuilt implementation -> Hash table
// 2. Time complexity -> O(1)
// 3. valid keys datatypes

// Question: 
// Give N numbers of strings and Q queries.
// In each query, you're given a string.
// Print frequency of that string.

// N<=10^6
// |S| <=100
// Q <= 10^6

void printMap(unordered_map<string, int> &m){
    cout << "The size of the map: " << m.size() << endl;
    for (auto it = m.begin(); it!=m.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // O(logn)
    }
    
}

int main(){

    unordered_map<string, int> mp;
    int N;
    cin >> N;
    for (auto i = 0; i < N; i++)
    {
        string st;
        cin >> st;
        mp[st]++;
    }
    int queries;
    cin >> queries;
    while (queries--)
    {
        string target;
        cin >> target;
        cout << mp[target] << endl;
    }
    
    // printMap(mp);
    return 0;
}