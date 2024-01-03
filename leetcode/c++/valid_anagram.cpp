//https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::sort(s.begin(),s.end());
        std::sort(t.begin(),t.end());
        if(s.length() == t.length()) {
            for(auto i = 0; i < s.length(); i++) {
                if(s[i] != t[i])
                    return false;
            }
        }
        else {
            return false;
        }
        return true;
    }
};
