class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int totalGas = 0;
        int totalCost = 0;
        int currGas = 0;
        int result = 0;

        for (int i = 0; i < gas.size(); i++) {

            totalGas += gas[i];
            totalCost += cost[i];
            currGas += gas[i] - cost[i];

            if (currGas < 0) {
                result = i + 1;
                currGas = 0;
            }
        }

        return (totalGas < totalCost) ? -1:result;     
    }
};