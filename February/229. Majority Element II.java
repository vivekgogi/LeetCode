// 229. Majority Element II
// https://leetcode.com/problems/majority-element-ii/

class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int n = nums.length;
        Map<Integer, Integer> m = new HashMap<>();
        for (int i : nums) {
            m.put(i, m.getOrDefault(i, 0) + 1);
        }
        List<Integer> ans = new ArrayList<>();
        for (Map.Entry<Integer, Integer> entry : m.entrySet()) {
            if (entry.getValue() > n / 3) {
                ans.add(entry.getKey());
            }
        }
        return ans;
    }
}