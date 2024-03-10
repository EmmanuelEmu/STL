#include <bits/stdc++.h>
using namespace std;


vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> nge(nums2.size(), -1);
    stack<int> st;
    for (auto it = nums2.begin(); it!=nums2.end(); it++)
    {
        int i = distance(nums2.begin(), it);
        while (!st.empty() && nums2[i] > nums2[st.top()])
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
    vector<int> arrs;
    for (auto it = nums1.begin(); it != nums1.end(); it++)
    {
        auto value = (*it);
        auto result = find(nums2.begin(), nums2.end(), value);
        auto index = distance(nums2.begin(), result);
        arrs.push_back((nge[index] == -1 ? -1 : nums2[nge[index]]));
    }

    return arrs;
}

int main()
{
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> result = nextGreaterElement(nums1, nums2);
    for (auto it = result.begin(); it != result.end(); it++)
    {
        cout << (*it) << " ";
    }

    return 0;
}