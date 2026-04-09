class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(int i = 0; i < strs.size(); i++){
            res += to_string(strs[i].size()) + "#" + strs[i];
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0, n = s.size();
        while(i < n){
            int hashPos = s.find('#', i);
            int len = stoi(s.substr(i, hashPos - i));
            i = hashPos + 1;
            ans.push_back(s.substr(i, len));
            i += len;
        }
        return ans;
    }
};
