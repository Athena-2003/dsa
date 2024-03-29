// https://leetcode.com/problems/search-insert-position/description

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int first = 0, mid = -1;
//         int last = nums.size();
//         if(target == 0) {
//             return 0;
//         }
//         while(first < last) {
//             mid = (first + last) / 2;
//             if(nums[mid] == target) {
//                 return mid;
//             }
//             else if(nums[mid] > target) {
//                 last = mid-1;
//             }
//             else {
//                 first = mid+1;
//             }
//         }
//         return (nums[mid] < target) ? mid + 1 : mid;
//     }
// };
class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return left;
    }
};

