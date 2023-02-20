// 229. Majority Element II
// https://leetcode.com/problems/majority-element-ii/

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        map<int, int> m;
        for (int i : nums)
        {
            m[i]++;
        }
        vector<int> ans;
        for (auto it : m)
        {
            if (it.second > n / 3)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};