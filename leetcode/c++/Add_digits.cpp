// https://leetcode.com/problems/add-digits/

int addNum(int num) {
    int sum = 0;
    int rem;
    for(auto i = 0; num > 0; i++ ) {
        rem = num % 10;
        sum = sum + rem;
        num = num/10;
    }
    return sum;
}

class Solution {
public:
    int addDigits(int num) {
        while(num > 9) {
            num = addNum(num);
        }
        return num;
    }
};
