class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        vector<string> vec(strs.begin(), strs.end());
        vector<bool> mark(n, 0);
        
        for(auto &s : vec){
            sort(s.begin(), s.end());
        }

        for(int i = 0; i < n; i++){
            if(!mark[i]){
                vector<string> group;
                group.push_back(strs[i]);
                mark[i] = 1;

                for(int j = i + 1; j < n; j++){
                    if(vec[j] == vec[i]){
                        group.push_back(strs[j]);
                        mark[j] = 1;
                    }
                }
                ans.push_back(group);
            }
        }
        return ans;
    }
};
