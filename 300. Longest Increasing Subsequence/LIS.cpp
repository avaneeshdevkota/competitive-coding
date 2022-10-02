class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int> hash(nums.size(), 1);
        int res = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            
            for (int j = i; j >= 0; j--) {
                
                if (nums[j] < nums[i]) {
                    
                    hash[i] = max(hash[i], hash[j] + 1);
                    res = max(res, hash[i]);
                }
            }
        }
        
        return res;
    }
};