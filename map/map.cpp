#include<bits/stdc++.h>
using namespace std;


void printMap(map<int, string> &m){
    cout << "The size of the map: " << m.size() << endl;
    for (auto it = m.begin(); it!=m.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // O(logn)
    }
    
}


int main(){
    map<int,string>mp;
    map<int,string>:: iterator it;

    //Time complexity of insertion: O(logn)
    // if key is a string, then it's complexity will be string.size()*log(n)
    mp.insert({1,"Emu"}); 
    mp.insert({2,"Mukta"});
    mp.insert({3,"Jony"});
    mp.insert(make_pair(4,"Martha"));
    mp.insert(make_pair(0,"Sulata"));

    printMap(mp);

    auto findResult = mp.find(3);
    mp.erase(3);
    printMap(mp);
    cout << findResult->first << " " << findResult->second << endl;


    return 0;
}

