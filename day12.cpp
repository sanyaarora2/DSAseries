Ques 1 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
        
    }
}; 
TC=O(logn)

SC=O(1)


Ques 2
class Solution {
public:
      int lowerindex(vector<int>&nums,int target){
        int low=0;
        int high=nums.size()-1;
        int ans=-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(nums[mid]==target){
            ans=mid;
            high=mid-1;}
            
            
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
      }
      int upperindex(vector<int>&nums,int target){
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size()-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(nums[mid]==target){
            ans=mid;
            low=mid+1;}
            
            
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
      }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb=lowerindex(nums,target);
        int ub=upperindex(nums,target);
        if(lb==-1 )
        return {-1,-1};
        else 
        return {lb,ub};
    }
};
TC= O(logn)
SC=O(1)

Ques 3 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int ans=-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==target){
                return m;
        
        }
            else if(nums[m]<target)
            l=m+1;
            else
            h=m-1;
        }
        return l;
        
    }
};
TC=O(logn)
SC=O(1)
