//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }

        if(needle.length() > haystack.length()) {
            return -1;
        }

        for (auto i = 0; i <= haystack.length() - needle.length(); i++) {
            int s = i;
            int l = 0;

            for (auto j = 0; j < needle.length(); j++) {
                if (haystack[s] == needle[j]) {
                    l++;
                }

                if (l == needle.length()) {
                    return i;
                }

                s++;
            }
        }

        return -1;
    }
};
