// https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/

class Solution {
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

public:
    vector<string> removeAnagrams(vector<string>& words) {
        for(auto i = 0; i < words.size(); i++) {
            for(auto j = 0; j < words.size(); j++) {
                if (i != j && i == j-1){
                    if(isAnagram(words[i], words[j])){
                    words.erase(words.begin()+j);
                    j--; 
                }
                }
            }
        }    
        return words;
    }
};
