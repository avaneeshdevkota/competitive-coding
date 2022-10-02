class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        //Swap the first 16 bits with the last 16 bits
        // & with ffff0000 preserves the first 16 and we shift this by 16 to the right
        // & with 0000ffff preserves the last 16 and we shift this by 16 to the left
        
        n = ((n & 0xffff0000) >> 16 | (n & 0x0000ffff) << 16);
        
        //Same logic as above for all the other shifts.
        
        n = ((n & 0xff00ff00) >> 8 | (n & 0x00ff00ff) << 8);
        n = ((n & 0xf0f0f0f0) >>4 | (n & 0x0f0f0f0f) << 4);
        n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);
        n = ((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1);
        
        return n;
    }
};