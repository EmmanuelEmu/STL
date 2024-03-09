#include<bits/stdc++.h>
#include<vector>
using namespace std;


void printVec(vector<int> &v){
    cout << "The size of the vector is: " << v.size() << endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    v.push_back(10);
    cout << endl;
}
int main()
{

    vector <int> v = {1,2,3,4,5};
    vector<int> &v2 = v; // Complexity -> O(n)
    printVec(v2);
    v2.pop_back();
    printVec(v2);
    printVec(v);
    printVec(v);
    /*vector <int> v;
    vector <int> :: iterator i;
    vector <int> :: reverse_iterator j;
    for (int i=1 ; i<=10 ; i++)
    {
        v.push_back(i);
    }
    i=v.begin();
    v.erase(i+4);
    v.insert(i+4,50);
    for(i = v.begin(); i!=v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    for(j = v.rbegin(); j!=v.rend(); j++)
    {
        cout << *j << " ";
    }
    cout << endl;
    cout << endl << v.max_size() << endl;
    cout<< v.capacity() << endl;*/


    /*vector<int>vec(10,9);
    vec.push_back(10);
    printVec(vec);*/

    return 0;
}