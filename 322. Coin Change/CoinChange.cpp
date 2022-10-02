class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        //Vector of size amount + 1 to keep track of min coins needed to make any amount (0 - amount)
        vector<int> dp(amount + 1);
        dp[0] = 0;
        
        for (int i = 1; i < amount + 1; i++) {
            
            dp[i] = INT_MAX;
            
            for (int j = 0; j < coins.size(); j++) {
                
                if (i - coins[j] < 0) continue;
                
                //If there was a way to make (i - coins) amount :
                
                if (dp[i-coins[j]] != INT_MAX) {
                    
                    dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
                }
            }
        }
        
        if (dp[amount] == INT_MAX) return -1;
        
        return dp[amount];
    }
};