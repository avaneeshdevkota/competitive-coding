class Solution {
public:
    int minimumRounds(vector<int>& tasks) {

        unordered_map<int, int> hash;
        int rounds = 0;

        for (int i = 0; i < tasks.size(); i++) {
            hash[tasks[i]]++;
        }

        for (auto x : hash) {

            if (x.second < 2) {

                return -1;
            }

            if (x.second % 3 == 0) {
                rounds+= (x.second/3);
            }

            else {
                rounds+= (x.second/3) + 1;
            }
        }

        return rounds;
    }
};