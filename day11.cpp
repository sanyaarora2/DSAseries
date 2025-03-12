Ques 1 
class Solution {
public:
vector<int>rows(int row){
    long long ans=1;
    vector<int>res;
    res.push_back(1);
    for(int col=1; col<row; col++){
        ans=(ans*(row-col))/col;
        res.push_back(ans);

    }
    return res;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1; i<=numRows; i++){
            ans.push_back(rows(i));
            
        }
        return ans;
        
    }
};
```
Approach: built a function to find relation between row and col.
TC= O(n²)
SC=O(n²)
Ques 2
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        for(int i=0; i<n ; i++){
            for(int j=i; j<n ; j++){
            int temp= matrix[i][j];
            matrix[i][j]=matrikx[j][i];
            matrix[j][i]=temp;
            }

        }
        for(int i=0; i<n; i++){
        int p=0;
        int k=n-1;
        while(p<k){
            int temp= matrix[i][p];
            matrix[i][p]=matrix[i][k];
            matrix[i][k]=temp;
            p++;
            k--;
        }}
        
    }
Approach: first took the transpose and then reversed each row.
TC= O(n²)
SC=O(1)
Ques 3
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m= matrix[0].size();
        int left=0;
        int right=m-1;
        int top=0;
        int bottom=n-1;
        vector<int>ans;
        while(left<=right && top<=bottom){
            for(int i= left; i<= right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top; i<=bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right; i>= left; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom --;
            }
            if(left<=right){
                for(int i=bottom; i>= top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }


        return ans;
    }
Approach: used 4 pointers and applied the given conditions.
TC= O(n²)
SC= O(n)
