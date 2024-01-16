// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/?envType=study-plan-v2&envId=top-interview-150
// vector<int> shift(int s, vector<int>& a) {
//     for(auto i = s; i < a.size() - 1; i++) {
//         a[i] = a[i+1];
//     }
//     a.pop_back();
//     return a;
// }

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int count = 1;
//         for ( auto i = 0; i < nums.size() - 1; i++) {
//             int j = i+1;
//             if(nums[i] == nums[j] && i != 0){
//                 continue;
//             }
//             while(nums[i] == nums[j]) {
//                 if(nums[i] == nums[j]) {
//                     count++;
//                     if(count > 2) {
//                         shift(j,nums);
//                         break;
//                     }
//                 }
//                 j++;
//             }
//         }
//         int k = nums.size();
//         return k;   
//     }
// };

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        // int ele= nums[0];
        for(auto ele : nums)
        {
            if(i==0 || i==1 || nums[i-2] != ele)
            {
                nums[i] = ele;
                i++;
            }
        }
    return i ;
    }
};
