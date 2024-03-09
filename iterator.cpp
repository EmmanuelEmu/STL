#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {10, 11, 12, 13, 14, 15};
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;


    vector<pair<int, string>> student = {{1,"Emmanuel"},{2,"Mukta"},{3,"Jony"}};
    // vector<pair<int, string>> :: iterator it1;
    for (auto it1=student.begin(); it1!=student.end(); it1++)
    {
        cout << (it1->first )<< " " << (it1->second) << endl;
    }
    cout << "\n\n";
    for(pair<int, string> &singleStudent : student){
        cout << singleStudent.first << " " <<singleStudent.second << endl;
    }

    return 0;
}