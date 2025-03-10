class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0; i<nums.size();i++){
            int j=nums[i];
            int remaining=target-j;
            if(mpp.find(remaining)!=mpp.end()){
                return{mpp[remaining],i};
            }
            else{
                mpp[j]=i;
            }
        }
        return{-1,-1};
        
    }
};

//Ques 2
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low,mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid], nums[low]);
                low++;
                mid++;

            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        
    }
};


//Ques 3
class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        
        // Your code goes here
        int sum,maxsum=0;
        for(int i=0; i<arr.size()-1;i++){
            sum=arr[i]+arr[i+1];
            maxsum=max(sum,maxsum);
        }
        return maxsum;
    }
};
