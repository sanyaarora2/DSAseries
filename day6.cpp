class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // write code here
        vector<int> temp;
        temp.push_back(1);
        for (int i = 1; i < arr.size(); i++) {
            int count = 1;  
            int j = i - 1;
            while (j >= 0 && arr[i] >= arr[j]) {
                count++;
                j--;
            }
            temp.push_back(count);
        }
        return temp;
    }
};
