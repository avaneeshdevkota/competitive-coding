class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {

        vector<vector<int>> adjMap(n);

        for (auto x : edges) {
            adjMap[x[0]].push_back(x[1]);
            adjMap[x[1]].push_back(x[0]);
        }

        return dfs(-1, 0, adjMap, hasApple);
    }

    int dfs(int prev, int curr, vector<vector<int>>& adjMap, vector<bool>& hasApple) {

        int ans = 0;

        for (auto x : adjMap[curr]) {
            if (x != prev) {
                int res = dfs(curr, x, adjMap, hasApple);
                if (res || hasApple[x]) {
                    ans += (res + 2);
                }
            }
        }
        return ans;
    }
};