ques 1
class Solution {
public:
     int midcol(vector<vector<int>>& mat, int k) {
        int max=mat[k][0];
        int maxidx=0;
        for(int i=1; i<mat[0].size();i++){
        if(mat[k][i]>max){
            max=mat[k][i];
        maxidx=i;
        }
        }
        return maxidx;
     }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low=0;
        int high=mat.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int col=midcol(mat,mid);
            
            
            int top = (mid > 0) ? mat[mid - 1][col] : -1;
            int bottom = (mid < mat.size() - 1) ? mat[mid + 1][col] : -1;
            ;
            if(mat[mid][col]>top && mat[mid][col]>bottom){
                return {mid,col};
            }
            else if( mid>0 && mat[mid][col]<mat[mid - 1][col] ){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return {-1,-1};
        
    }
};


TC=O(nlogn*m)
SC=O(1)


ques 2

class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m= mat[0].size();
        vector<int>temp;
        for(int i=0 ;i<n; i++){
            for(int j=0; j<m; j++){
                temp.push_back(mat[i][j]);
            }
        }
        sort(temp.begin(), temp.end());
        int k=temp.size();
        if(k%2!=0){
            int low=0;
            int high=k-1;
            int mid=low+(high-low)/2;
            return temp[mid];
        }
        else{
            int low=0;
            int high=k-1;
            int mid=low+(high-low)/2;
            return (temp[mid]+temp[mid+1])/2;
            
        }
        return -1;
    }
};

TC,SC=O(n*m)


bonus prob1
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
TC=O(n)
SC=O(1)
