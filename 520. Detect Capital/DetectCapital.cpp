class Solution {
public:
    bool detectCapitalUse(string word) {

        string bitrep = "0";

        if (isupper(word[0])) {
            
            bitrep[0] = '1';
        }

        string v1 = "1";
        string v2 = "0";
        string v3 = "1";
        int len = word.size();

        for (int i = 1; i < len; i++) {

            if (isupper(word[i])) {

                bitrep += "1";
            }

            else {

                bitrep += "0";
            }

            v1 += "1";
            v2 += "0";
            v3 += "0";
        }

        return (bitrep == v1) || (bitrep == v2) || (bitrep == v3);
    }
};