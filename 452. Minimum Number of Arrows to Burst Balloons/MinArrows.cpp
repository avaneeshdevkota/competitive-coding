class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int arrow = 0;
        int last = points[0][1];

        for (int i = 1; i < points.size(); i++) {

            if (points[i][0] > last) {
                arrow++;
                last = points[i][1];
            }

            last = min(last, points[i][1]);
        }

        return arrow + 1;
    }
};