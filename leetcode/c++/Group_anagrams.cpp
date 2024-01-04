//https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> anagramGroups;

        for (const auto& str : strs) {
            std::string sortedStr = str;
            std::sort(sortedStr.begin(), sortedStr.end());
            anagramGroups[sortedStr].push_back(str);
        }

        std::vector<std::vector<std::string>> result;
        for (const auto& group : anagramGroups) {
            result.push_back(group.second);
        }

        return result;
    }
};
