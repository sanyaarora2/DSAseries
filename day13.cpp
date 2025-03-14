Day 13
Ques 1
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int ans=-1;
        if(nums.size()==1)
        return nums[0];
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[high]<nums[mid]){
                low=mid+1;
                
            }
            else if(nums[high]>nums[mid]){
              
            
                  high=mid;
                  

            }
        }
        return nums[low];
        
    }
};
TC= O(logn)
SC= O(1)



Ques 2
class Solution {
public:
    int search(vector<int>& nums, int target) {
    
        int low=0;
        int high=nums.size()-1;
        int ans=-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[low]<=nums[mid]){
                if(nums[low]<=target &&  nums[mid]>target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }}
                else{
                    if(nums[mid]<target && nums[high]>=target){
                        low=mid+1;
                    }
                    else {
                    high=mid-1;
                }
            }}
            return -1;
            
        
    }
};
TC= O(logn)
SC=O(1)


Ques 3 
int floornum(vector<int> &a, int n, int x){
	int floor=-1;
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(a[mid]==x)
		return a[mid];
		if(a[mid]<x){
			floor=a[mid];
				low=mid+1;}
			
			else{
				high=mid-1;
			}
		
		
	}
	return floor;

}
int ceilnum(vector<int> &a, int n, int x){
	int ceil=-1;
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(a[mid]==x)
		return a[mid];
		
		 if(a[mid]>x){
			ceil=a[mid];
				high=mid-1;}
			
			else{
				low=mid+1;
			}

		
	}
	return ceil;

}
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int first=floornum(a,n,x);
	int second=ceilnum(a,n,x);
	return {first,second};

}


TC= O(logn)
SC=O(1)
