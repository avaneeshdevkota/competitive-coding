class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        sort(costs.begin(), costs.end());
        int count = 0;
        int index = 0;

        while (index < costs.size() && coins >= costs[index]) {
            coins -= costs[index++];
            count++;
        }

        return count;
    }
};