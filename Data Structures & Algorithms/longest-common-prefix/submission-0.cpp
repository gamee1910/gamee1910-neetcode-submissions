class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minz = INT_MAX;
        for (auto& s: strs) {
            if (minz < s.size()) minz = s.size();
        } 
        int idx = 0;
        for(int i = 0; i < minz; i++){
            for(int j = 1; j < strs.size(); j++){
                if (strs[j][i] != strs[j-1][i]) {
                    return strs[j].substr(0, i);
                }
            }
        }
        return "";
    }
};