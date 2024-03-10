#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    multimap<int, int> number_index;
    vector<int> temp_nums = nums;
    int temp_target = target;
    for (auto it = nums.begin(); it != nums.end(); it++)
    {
        int index = distance(nums.begin(), it);
        number_index.insert({(*it), index});
    }
    vector<int> resultIndexes;
    vector<int> result1;
    auto minValue = *min_element(nums.begin(), nums.end());
    while (target > 0)
    {
        target -= *min_element(nums.begin(), nums.end());
        int minIndex = distance(nums.begin(), min_element(nums.begin(), nums.end()));
        auto it_number = number_index.find(nums[minIndex]);
        resultIndexes.push_back(it_number->second);
        number_index.erase(it_number);
        nums.erase(nums.begin() + minIndex);
        cout << endl;
        auto it = find(nums.begin(), nums.end(), target);
        if (it != nums.end())
        {
            int dist = distance(nums.begin(), it);
            auto it1 = number_index.find(nums[dist]);
            resultIndexes.push_back(it1->second);
            nums.erase(nums.begin() + dist);
            number_index.erase(it1);
            return resultIndexes;
        }
    }
    if (target == 0 && !resultIndexes.empty())
    {
        result1 = resultIndexes;
    }
    else
    {
        resultIndexes.clear();
        for (int i = 0; i < temp_nums.size(); i++)
        {
            int temp2_target = temp_target;
            temp2_target -= temp_nums[i];
            // temp_nums.erase(temp_nums.begin()+i);
            auto it = find(temp_nums.begin() + i+1, temp_nums.end(), temp2_target);
            if (it != temp_nums.end())
            {
                resultIndexes.push_back(i);
                resultIndexes.push_back(distance(temp_nums.begin(), it));
                return resultIndexes;
            }
        }
        if (!resultIndexes.empty())
        {
            return resultIndexes;
        } else{
            return result1;
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