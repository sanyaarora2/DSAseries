Day 17 
Ques 1
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
        return false;
        unordered_map<char,char>mpp1;
        unordered_map<char,char>mpp2;
        for(int i=0; i<s.length();i++){
            char ch1=s[i];
            char ch2=t[i];
        
        if(mpp1.find(ch1)!=mpp1.end()){
            if(mpp1[ch1]!=ch2)
            return false;}
            else{
            mpp1[ch1]=ch2;
        }
        if(mpp2.find(ch2)!=mpp2.end()){
            if(mpp2[ch2]!=ch1)
            return false;}
            else{
            mpp2[ch2]=ch1;
        }}
        return true;
        
    }
};
TC=O(n)
SC=O(1)

Ques 2 
class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string result="";
        for(char ch:s){
            if(ch=='('){
                if(count>0){
                result+=ch;
            }
            count++;
        }
        else if(ch==')'){
            count--;
                if(count>0)
                result+=ch;
            }
            
        }
        
        return result;    }
};
```TC=O(n)
SC=O(1)
