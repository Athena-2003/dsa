# https://leetcode.com/problems/determine-if-string-halves-are-alike/?envType=daily-question&envId=2024-01-12

class Solution(object):
    def halvesAreAlike(self, s):
        """
        :type s: str
        :rtype: bool
        """
        a = s[:len(s)/2]
        b = s[len(s)/2:]

        vowels = "aeiouAEIOU"

        acount = 0
        bcount = 0

        for i in a:
            if i in vowels:
                acount += 1
        for i in b:
            if i in vowels:
                bcount += 1

        if (acount == bcount):
            return True
        else:
            return False
