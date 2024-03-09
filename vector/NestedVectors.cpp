#include<bits/stdc++.h>
using namespace std;


void printVec(vector<pair<int,int> >&p)
{

    cout << p.size() << endl;
    cout << p[0].first << " " << p[0].second << endl;
    for(int i=0; i<p.size(); i++)
    {
        cout << "Element-> " << i << ": " << p[i].first << " " << p[i].second << endl;
    }

}


/*void printVec1(vector<int>&p){
    for(int i=0;i<p.size();i++){
            for(int j=0;j<p[i].size();j++){
                cout << p[i][j] << " ";
            }
            cout << endl;
    }
}*/


int main()
{

    vector<pair<int,int> >dp;
    vector<int>v[10];
    for(int i=0; i<10; i++)
    {
        pair<int,int>p = make_pair(i,i+1);
        dp.push_back(p);
    }



    int n;
    int n1;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> n1;
        int x;
        for(int j=0; j<n1; j++)
        {
            cin >> x;
            v[i].push_back(x);
        }
    }

//    cout << v[0][0]<< endl;
//    cout << v[0][1]<< endl;
//    cout << v[0][2]<< endl;
//    cout << v[1][0]<< endl;
//    cout << v[1][1]<< endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    //printVec1(v);
    return 0;
}
/*
3
3
1 2 3
2
4 5
1
3

*/
