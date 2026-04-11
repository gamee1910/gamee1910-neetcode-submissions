class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(int i = 0; i < strs.size(); i++){
            res += to_string(strs[i].size()) + "#" + strs[i];
        }
        return res;
    }

    vector<string> decode(string str) {
        vector<string> ans;
        string res = "";
        int n = str.size(), i = 0;
        int l = 0, r = 0;
        while(i < n){
            if(str[i] == '#'){
                int r = i, sizeLen = stoi(str.substr(l, r-l));
                // reset
                l += sizeLen + 1 + r;
                string val = str.substr(r+1,r+sizeLen-1);
                ans.push_back(val);
            }
            i++;
        }
        return ans;
    }

   
};
