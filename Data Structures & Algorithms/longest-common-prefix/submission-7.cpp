class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for(int i = 0; i < strs[0].size(); i++){
            for(string str: strs){
                if(i == str.size() || str[i] != strs[0][i]){
                    return str.substr(0, i);
                }
            }
        }
        return strs[0];
    }
};