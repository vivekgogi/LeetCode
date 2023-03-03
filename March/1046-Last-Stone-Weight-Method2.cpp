// 1046. Last Stone Weight
// https : // leetcode.com/problems/last-stone-weight/

class Solution
{
public:
    int lastStoneWeight(vector<int> &st)
    {

        priority_queue<int> q(begin(st), end(st));
        while (q.size() > 1)
        {
            auto w1 = q.top();
            q.pop();
            auto w2 = q.top();
            q.pop();
            if (w1 - w2 > 0)
                q.push(w1 - w2);
        }
        return q.empty() ? 0 : q.top();
    }
};