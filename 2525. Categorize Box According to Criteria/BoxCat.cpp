class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        
        bool bulky = false;
        bool heavy = false;
        int max_dim = 10000;
        int max_vol = 1000000000;
        
        
        if (mass >= 100) {
            heavy = true;
        }
        
        if (length >=  max_dim || width >= max_dim || height >= max_dim) {
            bulky = true;
        }
        
        int volume = 0.000000001 * length * width * height;
        
        
        if (volume >= 1) {
            bulky = true;
        }
        
        if (bulky && heavy) {
            return "Both";
        }
        
        else if (bulky) {
            return "Bulky";
        }
        
        else if (heavy) {
            return "Heavy";
        }
        
        else {
            return "Neither";
        }
    }
};