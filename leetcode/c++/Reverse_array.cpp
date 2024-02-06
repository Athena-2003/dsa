// https://leetcode.com/problems/rotate-array/description/?envType=study-plan-v2&envId=top-interview-150

// MY DUMB CODE

// void push(vector<int>& arr) {
//     for(auto i = arr.size()-1; i > 0; i--) {
//         arr[i] = arr[i-1];
//     }
// }
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         for(auto i = 0; i < k; i++) {
//             int last = nums[nums.size()-1];
//             push(nums);
//             nums[0] = last;
//         }
//     }
// };
//
// copied code from solutions
class Solution {
    public :
    void reverse(vector<int>& nums, int i, int j){
        int li = i; // left;
        int ri = j;
        
        while(li < ri){
            int temp = nums[li];
            nums[li] = nums[ri];
            nums[ri] = temp;
            
            li++;
            ri--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        if(k < 0){ 
            k += nums.size();
        }
        reverse(nums, 0, nums.size() - k - 1);
        reverse(nums, nums.size() - k, nums.size() - 1);
        reverse(nums, 0, nums.size() - 1);
    }
};
