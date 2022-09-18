class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> left;
        vector<int> right(nums.size());
        vector<int> res;
            
        int pprod = nums[0];
        
        left.push_back(1);
        
        for (int i = 1; i < nums.size(); i++) {
            
            left.push_back(pprod);
            pprod = pprod * nums[i];
        }
        
        pprod = nums[nums.size()-1];
        
        for (int i = nums.size() -2 ; i >= 0; i--) {
            
            right[i] = pprod;
            pprod = pprod * nums[i];
        }
        
        right[nums.size()-1] = 1;
        
        for (int i = 0; i < nums.size(); i++) {
            
            res.push_back(left[i] * right[i]);
        }
        
        return res;
    }
};