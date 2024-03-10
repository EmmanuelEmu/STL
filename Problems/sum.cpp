#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    multimap<int, int> number_index;
    vector<int> temp_nums = nums;
    vector<int> resultIndexes;
    vector<int> result1;

    for (int i = 0; i < temp_nums.size(); i++)
    {
        int temp2_target = target;
        temp2_target -= temp_nums[i];
        // temp_nums.erase(temp_nums.begin()+i);
        auto it = find(temp_nums.begin() + i + 1, temp_nums.end(), temp2_target);
        if (it != temp_nums.end())
        {
            resultIndexes.push_back(i);
            resultIndexes.push_back(distance(temp_nums.begin(), it));
            return resultIndexes;
        }
    }
}

int main()
{

    int N;
    vector<int> numbers;
    cin >> N;
    for (auto i = 0; i < N; i++)
    {
        int number;
        cin >> number;
        numbers.push_back(number);
    }
    int target;
    cin >> target;
    vector<int> result = twoSum(numbers, target);
    for (auto i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}