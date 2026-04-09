class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size(), i = 0;
        vector<string> vec(strs.begin(), strs.end());
        vector<vector<string>> ans;
        vector<bool> done(n, 0);
        for(auto& str: vec){
            sort(str.begin(), str.end());
        }
        while (i < n) {
            if (!done[i]) {
                vector<string> res;
                res.push_back(strs[i]);
                done[i] = 1;
                int j = i + 1;
                while (j < n) {
                    if (vec[j] == vec[i]) {
                        res.push_back(strs[j]);
                        done[j] = 1;
                    }
                    j++;
                }
                ans.push_back(res);
            }
            i++;
        }
        return ans;
    }
};
