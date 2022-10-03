class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int res = neededTime[0];
        int max_cost = neededTime[0];
        
        for (int i = 1; i < colors.size(); i++) {
            
            if (colors[i] != colors[i-1]) {
                
                res = res - max_cost;
                max_cost = 0;
            }
            
            res = res + neededTime[i];
            max_cost = max(max_cost, neededTime[i]);
        }
        
        return res - max_cost;        
    }
};