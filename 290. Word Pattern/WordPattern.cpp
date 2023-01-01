class Solution {
public:
    bool wordPattern(string pattern, string s) {

        s = s + ' ';
        unordered_map<char, string> cts;
        unordered_map<string, char> stc;
        int currW = 0;
        int currC = -1;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == ' ') {

                string word = s.substr(currW, i-currW);
                currW = i + 1;
                currC += 1;

                if (cts.find(pattern[currC]) != cts.end()) {

                    if (cts[pattern[currC]] != word) {

                        return false;
                    }
                }

                else if (stc.find(word) != stc.end()) {

                    if (stc[word] != pattern[currC]) {

                        return false;
                    }
                }

                else {

                    cts[pattern[currC]] = word;
                    stc[word] = pattern[currC];
                }
            }
        }

        return currC + 1 == pattern.size();
    }
};