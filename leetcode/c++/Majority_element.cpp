// https://leetcode.com/problems/majority-element/?envType=study-plan-v2&envId=top-interview-150


// this is my brute force tle solution
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int cutoff = nums.size() / 2;
//         int count = 0;
//         sort(nums.begin(), nums.end());
//         for ( auto i = 0; i < nums.size() ; i++ ) {
//             count = 0;
//             for ( auto j = 0 ; j < nums.size() ; j++) {
//                 if (nums[i] == nums[j]) {
//                     count++;
//                 }
//             }
//             if ( count > cutoff ) {
//                 return nums[i];
//             }
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};
