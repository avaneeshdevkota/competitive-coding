class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {

        int len = points.size();
        int max = 0;

        if (len <= 2) {
            return len;
        }

        unordered_map<int,int> hash;
        for (int i = 0; i < len; i++) {

            hash[points[i][0]]++;
        }

        for (auto x : hash) {

            if (x.second > max) {
                max = x.second;
            }
        }
        
        for (int i = 0; i < len; i++) {

            for (int j = i + 1; j < len; j++) {

                int curr = 2;
                int x1 = points[i][0];
                int x2 = points[j][0];

                if (x1 == x2) {
                    continue;
                }

                int y1 = points[i][1];
                int y2 = points[j][1];
                float slope = (float) (y2-y1) / (float) (x2-x1);

                for (int k = j + 1; k < len; k++) {

                    int kx = points[k][0];
                    int ky = points[k][1];
                    float new_slope = (float) (ky - y1) / (float) (kx - x1);

                    if (new_slope == slope) {
                        curr++;
                    }
                }

                if (curr > max) {
                    max = curr;
                }
            }
        }
        
        return max;
    }
};