// https://leetcode.com/problems/determine-if-string-halves-are-alike/description/?envType=daily-question&envId=2024-01-12

class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = s.substr(0, s.length()/2);
        string b = s.substr(s.length()/2, s.length());

        int acount = 0, bcount = 0;
        for(auto x: a){
            switch(x) {
                case 'A': acount++;
                        break;
                case 'a': acount++;
                        break;
                case 'E': acount++;
                        break;
                case 'e': acount++;
                        break;
                case 'I': acount++;
                        break;
                case 'i': acount++;
                        break;
                case 'O': acount++;
                        break;
                case 'o': acount++;
                        break;
                case 'U': acount++;
                        break;
                case 'u': acount++;
                        break;                
            }
        }
        for(auto x: b){
            switch(x) {
                case 'A': bcount++;
                        break;
                case 'a': bcount++;
                        break;
                case 'E': bcount++;
                        break;
                case 'e': bcount++;
                        break;
                case 'I': bcount++;
                        break;
                case 'i': bcount++;
                        break;
                case 'O': bcount++;
                        break;
                case 'o': bcount++;
                        break;
                case 'U': bcount++;
                        break;
                case 'u': bcount++;
                        break;                    
            }
        }
        if(acount == bcount) {
            return true;
        }
        else {
            return false;
        }
    }
};
