#include<bits/stdc++.h>
#include<list>
using namespace std;

int main()
{
    list <int> l;
    list <int> :: iterator it=l.begin();
    for(int i=1; i<=10; i++)
    {
        l.push_back(i);
    }
    for(it=l.begin(); it!=l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    advance(it,2);
    *it=10;
    for(it=l.begin(); it!=l.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
