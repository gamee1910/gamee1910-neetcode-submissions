class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for (auto &str:strs) {
            string s(str.begin(), str.end());
            sort(s.begin(), s.end());
            mp[s].push_back(str);
        }
        pair<int, int>
        for (auto & [_, v] : mp) {
            ans.push_back(v);
        }
        return ans;
    }
};
