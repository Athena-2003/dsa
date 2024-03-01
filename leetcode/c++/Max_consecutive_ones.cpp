// https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0;
        int count = 0;
        for (auto i: nums) {
            if(i == 1) {
                count++;
                if(count >= maxcount) {
                    maxcount = count;
                }
            }
            else {
                count = 0;
            }
        }
        return maxcount;
    }
};
