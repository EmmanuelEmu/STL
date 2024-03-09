#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, multiset<string>> student;
    int N;
    cin >> N;
    while (N--)
    {
        string name;
        int marks;
        cin >> name >> marks;
        student[marks].insert(name);
    }

    // for (auto &value:student)
    // {
    //     auto &mark = value.first;
    //     auto &stu = value.second;
    //     for (auto &name:stu)
    //     {
    //         cout << name << " " << mark <<endl;
    //     }

    // }

    auto cur_it =  (--student.end());
    while (true)
    {
        auto &mark = (*cur_it).first;
        auto &stu = (*cur_it).second;
        for (auto &name : stu)
        {
            cout << name << " " << mark << endl;
        }
        if (cur_it == student.begin())
        {
            break;
        }
        cur_it--;
        
    }


    return 0;
}