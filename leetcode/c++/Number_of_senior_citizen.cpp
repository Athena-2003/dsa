// https://leetcode.com/problems/number-of-senior-citizens/

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (auto i : details) {
            int age = stoi(i.substr(11, 2));
            if (age > 60) {
                count++;
            }
        }
        return count;
    }
};
