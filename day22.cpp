Ques 1
class Solution {
public:
    int minAddToMakeValid(string s) {
        int count1=0;
        int count2=0;
        for(int i=0; i<s.length();i++){
            if(s[i]=='(')
            count1++;
            else if(s[i]==')'){
                if(count1>0)
                count1--;
                else
                count2++;
            }
        }
        return count1+count2;
        
    }
};
TC= O(n)
SC=O(1)

Ques 2 
class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0; i<s.size();i++){
            int frq[26]={0};
            for(int j=i; j<s.length();j++){
                frq[s[j]-'a']++;
                int maxfrq=0;
                int minfrq=INT_MAX;
                for(int k=0; k<26; k++){
                    if(frq[k]>0){
                    maxfrq=max(maxfrq,frq[k]);
                    minfrq=min(minfrq,frq[k]);}
                }
                ans+=(maxfrq-minfrq);
            }
        }
        return ans;
        
    }
};
TC= O(n²)
SC=O(1)
