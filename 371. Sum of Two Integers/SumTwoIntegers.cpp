class Solution {
public:
    int getSum(int a, int b) {
        
        int a_b = 0;
        int b_b = 0;
        int ans = 0;
        int carry = 0;
        
        for (int i = 0; i < 32; i++) {
            
            a_b = a & 1;
            b_b = b & 1;
            ans = (a_b ^ b_b ^ carry) << i | ans;
            carry = (a_b | b_b) & (carry | a_b) & (carry | b_b);
            
            a = a>>1;
            b = b>>1;
        }
        
        return ans;
    }
};