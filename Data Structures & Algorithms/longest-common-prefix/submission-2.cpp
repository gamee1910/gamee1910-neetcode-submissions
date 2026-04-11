class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for(int i = 0; i < strs.size(); i++){
            cout << strs[i] << endl;
            for(int j = 0; j < strs.size(); j++){
                cout << strs[j] << endl;
                if(strs[i][j] != strs[i][j + 1]){
                    return strs[0].substr(0, j);
                }
            }
        }
        return strs[0];
    }
};