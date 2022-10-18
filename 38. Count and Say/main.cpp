#include<unordered_map>
#include<string>
#include<iostream>

using namespace std;

class Solution {

public:

    string countAndSay(int n) {
        
        unordered_map<int, string> hash; //Stores the values of previous countAndSay sequences.
        hash[1] = "1"; //Base Case
        
        for (int i = 2; i <= n; i++) {
            
            hash[i] = helper(hash[i-1]);
        }
        
        return hash[n];
        
    }
    
    string helper (string n) { // Create and return the count and say sequence for input string.
        
        int left = 0;
        string conv = "";
        
        for (int right = 0; right <= n.size()-1; right++) {
            
            if (n[right] != n[right+1]) { // If the next character is different, concatenate the count of the current character and the character to the result string.
                
                conv += to_string(right-left+1) + n[right];
                left = right + 1;
            }
        }
        
        return conv;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//

int main() {

    Solution solver;
    cout<<solver.countAndSay(4);
}