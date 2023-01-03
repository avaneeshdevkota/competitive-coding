class Solution {
public:
    int minDeletionSize(vector<string>& strs) {   
        int count = 0;
        for (int i = 0; i < strs[0].size(); i++) {
            string col = "";
            for (int j = 0; j < strs.size(); j++) {
                col += strs[j][i];
            }
            string sorted = col;
            sort(sorted.begin(), sorted.end());
            if (sorted != col) {
                count++;
            }
        }
        return count;
    }
};