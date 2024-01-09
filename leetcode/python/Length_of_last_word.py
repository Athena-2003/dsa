# https://leetcode.com/problems/length-of-last-word/?envType=study-plan-v2&envId=top-interview-150

class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        words = [i for i in s.split() if i != ' ']
        last = words[-1]
        return len(last)
