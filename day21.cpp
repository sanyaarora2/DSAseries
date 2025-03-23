ques 1
class Solution {
public:
    string longestPalindrome(string s) {
        //approach: expand around the centre;
        int n=s.length();
        if(n<=1) return s;
        int maxlen=1;
        int start=0;
        for(int i=0; i<n; i++){
            //odd
            int left=i;
            int right=i;
            while(left>=0 && right<n && s[left]==s[right]){
                if(right-left+1>maxlen){
                    start=left;
                maxlen=right-left+1;
            }
            left--;
            right++;}
            //even
            left=i;
            right=i+1;
             while(left>=0 && right<n && s[left]==s[right]){
                if(right-left+1>maxlen){
                    start=left;
                maxlen=right-left+1;
            }
            left--;
            right++;}
            

            }
        
        return s.substr(start,maxlen);
        
    }
};
TC= O(n²)
SC=O(1)

Ques 2
class Solution {
  public:
    int counting(string& s, int k) {
        // code here.
        int n=s.length();
        int maxlen=0;
        int left=0;
        int count=0;
        
        unordered_map<char,int>mpp;
        for(int right=0; right<n; right++){
            mpp[s[right]]++;
            while(mpp.size()>k){
                mpp[s[left]]--;
                if(mpp[s[left]]==0){
                    mpp.erase(s[left]);}
                    left++;
                }
                    
                            count+=right-left+1;
                        }
        
        return count;
    }
    
    int countSubstr(string& s, int k){
        return counting(s,k)-counting(s,k-1);
    }
};

TC= O(n)
SC=O(1)
