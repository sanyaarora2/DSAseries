class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>result(nums.size(),0);
        int positive=0;
        int negative=1;
        for(int i=0; i<nums.size();i++){
            if(nums[i]>0){
                result[positive]=nums[i];
                positive+=2;
            }
            else{
                result[negative]=nums[i];
                negative+=2;
            }
        }
        return result;
    }
};
Approach: created a vector array of the size of the orginal array and initialised all the elements to 0. Then created to pointers to store positive and negative elements in the vector array .
TC,SC =O(n)
Ques 2 
class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        long long index=-1;
        long long n=arr.size();
        for(int i=n-2; i>=0; i--){
            if(arr[i]< arr[i+1]){
                index=i;
                break;
            } }
            if(index==-1){
                reverse(arr.begin(), arr.end());
                return;

            }
            
            for(int i=n-1; i>index; i--){
                if(arr[i]>arr[index]){
                    swap(arr[i], arr[index]);
                    break;
                }
            }
            reverse(arr.begin()+index+1, arr.end());
Approach: first found out the breaking point i.e. at which the next element is greater than the current one, after that traversed the array from that breaking point till the end to find the element just greater than the breaking point and swapped them, at the end reversed the entire array to get the next permutation.
TC=O(N)
SC=O(1)
        
        
        
        
    }
};
