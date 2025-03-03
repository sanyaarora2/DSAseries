//ques 263 ugly number
//code
class Solution {
    public:
        bool isUgly(int n) {
            if(n<=0) return false;
            
            while (n%2==0)
            n=n/2;
            while (n%3==0)
            n=n/3;
            while (n%5==0)
            n=n/5;
            if(n==1)
            return true;
            else
            return false;
            
        }
    };

    //ques reverse bits
//code
class Solution {
    public:
      long long reversedBits(long long x) {
          // code here
          long long result=0;
          int b=31;;
          while(x!=0){
              int bit=x%2;
              result=result+bit*pow(2,b);
              x=x/2;
              b--;
          }
          return result;
      }
  };k