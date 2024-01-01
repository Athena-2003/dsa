//https://leetcode.com/problems/contains-duplicate/

impl Solution {
    pub fn contains_duplicate(mut nums: Vec<i32>) -> bool {
        nums.sort();
        let n = nums.len();
        for i in 1..n {
            if nums[i] == nums[i-1] {
                return true;
            }
        }
        return false;
    }
}
