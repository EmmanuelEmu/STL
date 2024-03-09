#include<bits/stdc++.h>
using namespace std;

/*Given N numbers of string. Print unique strings in lexographical order
with their frequency 
N<=10^5
|S|<=100*/

void printMap(map<string, int> &m){
    cout << "The size of the map: " << m.size() << endl;
    for (auto it = m.begin(); it!=m.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // O(logn)
    }
    
}

int main(){

    map<string, int> mp;
    int N;
    cin >> N;
    for (auto i = 0; i < N; i++)
    {
        string st;
        cin >> st;
        mp[st]++;
    }
    printMap(mp);
    return 0;
}