class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            // Merge values for common elements
            for (int i = 0; i < nums1.size(); i++) {
                for (int k = 0; k < nums2.size(); k++) {
                    if (nums1[i][0] == nums2[k][0]) {
                        nums1[i][1] += nums2[k][1];
                        nums2[k][0] = -1; // Mark as merged
                    }
                }
            }
    
            // Add elements from nums2 that were not merged
            for (int k = 0; k < nums2.size(); k++) {
                if (nums2[k][0] != -1) {
                    nums1.push_back({nums2[k][0], nums2[k][1]});
                }
            }
    
            // Sort the final array
            sort(nums1.begin(), nums1.end());
    
            return nums1;
        }
    };