# 229. Majority Element II
# https://leetcode.com/problems/majority-element-ii/

class Solution(object):
    def majorityElement(self, nums):
        n = len(nums)
        m = {}
        for i in nums:
            if i in m:
                m[i] += 1
            else:
                m[i] = 1
        ans = []
        for key, value in m.items():
            if value > n // 3:
                ans.append(key)
        return ans
