//distinct numbers
class Solution {
    public:
        int distinctIntegers(int n) {
            if(n==1)
            return 1;
            return n-1;
            
        }
    };


//chocolate distribution
    class Solution {
        public:
          int findMinDiff(vector<int>& a, int m) {
              // code here
              sort(a.begin(),a.end());
              int mindiff=INT_MAX;
              int i=0;
              int j=m-1;
              while(j<a.size()){
                  mindiff=min((a[j]-a[i]),mindiff);
                  j++;
                  i++;
              }
              return mindiff;
          }
      };
      
