#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include<unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int testCase;
    unordered_map <string, int> student;
    cin >> testCase;
    int score = 0;
    for (auto i = 0; i < testCase; i++)
    {
        int type;
        string name;
        cin >> type;
        if (type == 1)
        {
            cin >> name >> score;
            student[name] += score;
        }
        else if (type == 2)
        {
            cin >> name;
            auto it = student.find(name);
            if(it!=student.end()){
                student.erase(it);
            }
            
        }
        else
        {
            cin >> name;
            auto it2 = student.find(name);
            if (it2 != student.end())
            {
                cout << it2->second << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}