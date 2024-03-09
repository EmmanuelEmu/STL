#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int n, target;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cin >> target;
    auto it = lower_bound(v.begin(), v.end(), target);
    int index = std::distance(v.begin(), it);
    
    cout << "The index: " << index << endl;
    if (*it == target)
    {
        cout << "Yes " << index << endl;
    } else{
        cout << "No " << index << endl;
    }
    
    return 0;
}