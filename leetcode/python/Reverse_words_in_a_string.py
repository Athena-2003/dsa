# https://leetcode.com/problems/reverse-words-in-a-string/?envType=study-plan-v2&envId=top-interview-150

class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.strip()
        strings = s.split(' ')
        final = []
        for i in strings:
            final.append(i.strip())
        last = [x for x in final if x != '']
        anolast = last[::-1]
        ans = ""
        for i in anolast:
            ans += i
            ans += ' '
        return ans.strip()
