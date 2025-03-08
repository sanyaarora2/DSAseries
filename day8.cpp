class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if (nums[i]!=0){
            swap(nums[i], nums[j]);
            j++;
        }
        
    }
    }
};
//Approach: used two pointer approach keep j at 0 and i is moved from 0 to end if arr[i] is not equal to zero then arr[i] and arr[j] are swapped and j is moved further right .
TC=O(n)
SC=O(1)
class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
        int i=0;
        int j=nums.size()-1;
        k=k%nums.size();
        while(i<j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        int s=0;
        int t=k-1;
        while(s<t){
            swap(nums[s], nums[t]);
            s++;
            t--;}
            int a=k;
            int b=nums.size()-1;
            while(a<b){
            swap(nums[a], nums[b]);
            a++;
                b--;}

        
        
        
    }
};
```
Approach: flipped the entire array then reversed first k elements to correct their order, then reversed the rest of the elements to restore their order.
TC=O(n)
SC=O(1)
