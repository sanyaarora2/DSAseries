Ques 1
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp
p1;
        unordered_map<char,int>mpp2;
        for(int i=0; i<s.length();i++){
            mpp1[s[i]]+=1;
        }
        for(int i=0; i<t.length();i++){
            mpp2[t[i]]+=1;
        }
        if(mpp1==mpp2)
        return true;
        else
        return false;
        
    }
};
TC, SC= O(n)

Ques 2
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prefix=strs[0];
        for(int i=1; i<strs.size();i++){
            while(strs[i].find(prefix)!=0){
               prefix= prefix.substr(0,prefix.length()-1);
            
            if(prefix.empty())
            return "";
        }}
        return prefix;
        
    }
};
```
TC= O(n²)
SC= O(1)
