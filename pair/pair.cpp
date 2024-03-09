#include<bits/stdc++.h>
using namespace std;



int main(){
    pair<int,string> p = make_pair(1,"Emmanuel");
    p.first = 2;
    pair <int, string> user = p ; 
    user.first = 3;
     cout << p.first << " " << p.second << endl;
    cout << user.first << " " << user.second << endl;


    pair <int,int> arr[3];
    arr[0] = {1,2};
    arr[1] = {2,3};
    arr[2] = {3,4};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    

    return 0;
}
