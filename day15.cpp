Day 15
Ques 1
// Brute 
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        vector<int>c;
        for(int i=0; i<a.size();i++){
            c.push_back(a[i]);
        }
        for(int i=0; i<b.size();i++){
            c.push_back(b[i]);
        }
        sort(c.begin(), c.end());
        return c[k-1];
    }
};
TC= O(2n)+O(nlogn)
SC=O(n)

//Optimal
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int n1=a.size();
        int n2=b.size();
        if(n1>n2) return kthElement(b, a,  k);
        int left=k;
        int low=max( k-n2,0);
        int high=min(k,n1);
        while(low<=high){
            int mid1=low+high>>1;
            int mid2=left-mid1;
            int l1=INT_MIN;
            int l2=INT_MIN;
            int r1=INT_MAX;
            int r2=INT_MAX;
            if(mid1<n1) r1=a[mid1];
            if(mid2<n2) r2=b[mid2];
            if(mid1-1>=0) l1=a[mid1-1];
            if(mid2-1>=0) l2=b[mid2-1];
            if(l1<=r2 && l2<=r1){
                return max(l1,l2);
            }
            else if(l1>r2)
            high=mid1-1;
            else if(l2>r1)
            low=mid1+1;
        }
        return -1;
        
    }
};

TC=O(logn)
SC=O(1)

Ques 2 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0;
        int high=n*m-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int r=mid/m;
            int l=mid%m;
            if(matrix[r][l]==target)
            return true;
            else if(matrix[r][l]<target)
            low=mid+1;
            else
            high=mid-1;
        }
        return false;
        
    }
};
TC=O(logn*m)
SC=O(1)


Ques 3
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        int row=0;
        int col=m-1;
        while(row<n && col>=0){
            
            
            
            if(matrix[row][col]==target)
            return true;
            else if(matrix[row][col]<target)
            row++;
            else
            col--;
        }
        return false;
        
    }
};
TC= O(n+m)
SC=O(1)
