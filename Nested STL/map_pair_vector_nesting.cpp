#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<pair<string, string>, vector<int>> mp;
    int t;
    cin >> t;
    while (t--)
    {
        string fn, ln;
        int n;
        cin >> fn >> ln >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[{fn, ln}].push_back(x);
        }
    }

     for (auto &value : mp)
        {
            auto &fullName = value.first;
            auto &list = value.second;

            cout << fullName.first << " " << fullName.second << endl;
            cout << "The size of the list: " << list.size() << endl;
            for (auto &number : list)
            {
                cout << number << " ";
            }
            cout << endl;
        }
    return 0;
}