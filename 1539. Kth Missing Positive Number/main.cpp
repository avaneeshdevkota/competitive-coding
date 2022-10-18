#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int left = 0;
        int right = arr.size()-1;
        
        while (left <= right) { //Perform binary search on strictly increasing array.
            
            int mid = (left + right)/2;
            int missing_numbers = arr[mid] - (mid + 1); // (mid + 1) is what you expect to find in an array with no missing integers.
            
            if (missing_numbers < k) { // if missing_numbers < k, search on the right half of the array.
                left = mid + 1;
            }
            
            else {
                right = mid - 1;
            }
        }
        
        return left + k;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//

int main() {

    Solution solver;
    vector<int> testCase = {2,3,4,7,11};
    cout<<solver.findKthPositive(testCase, 5);
    return 0;
}