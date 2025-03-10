class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int count = 0;
        for (int i = 0; i < arr.size(); ++i) {
            
            if (arr[i] == 0 && (i == 0 || arr[i - 1] == 0) && (i == arr.size() - 1 || arr[i + 1] == 0)) {
                arr[i] = 1; 
                count++;
                i++; 
            }
        }
        return count >= n;
    }
};
Approach: initialise a variable count to keep a track  of number of flowers planted and traversed through the entire array to check out the given conditions.
TC=O(n)
SC=O(1)
class Solution {
public:
    int minimumSumSubarray(vector<int>& arr, int l, int r) {
        int minsum=INT_MAX;
        for(int i=0; i<arr.size();i++){
            int sum=0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                int k=j-i+1;
                if(k>=l && k<=r && sum>0){
                    minsum=min(minsum,sum);
                }
            }
        }
        return (minsum==INT_MAX)?-1:minsum;
        
    }
};
