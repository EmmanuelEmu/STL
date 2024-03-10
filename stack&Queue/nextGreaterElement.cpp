#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v)
{
    vector<int> nge(v.size());
    stack<int> st;
    for (auto i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[i] > v[st.top()])
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}

int main()
{

    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = NGE(arr);
    for (auto i = 0; i < N; i++)
    {
        cout << arr[i] << " " << (result[i] == -1 ? -1 : arr[result[i]]) << endl;
    }

    return 0;
}