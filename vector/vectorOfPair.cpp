#include <bits/stdc++.h>

using namespace std;

void printVac(vector<pair<int, string>> &v)
{
    cout << "The size of the vector: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "id: " << v[i].first << " "
             << "Name: " << v[i].second << endl;
    }
    cout << endl;
}

int main()
{
    vector<pair<int, string>> student;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int id;
        string name;
        cin >> id >> name;
        student.push_back(make_pair(id,name));
    }

    printVac(student);
    return 0;
}