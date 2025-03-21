Ques 1 
class Solution {
public:
    int maxDepth(string s) {
        int maxx=0;
        int count=0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='(') {
                count++;
                maxx=max(maxx,count);
            }
            else if(s[i]==')') {
                count--;
                
            }
            
        }
        return maxx;
    }
};
TC= O(n), SC= O(1)
Ques 2

class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char, int> mpp = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i > 0 && mpp[s[i - 1]] < mpp[s[i]]) {
                sum += mpp[s[i]] - 2 * mpp[s[i - 1]];
            } else {
                sum += mpp[s[i]];
            }
        }
        return sum;
    }
};
TC, SC= O(n)
