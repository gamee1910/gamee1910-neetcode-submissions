class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(int i = 0; i < strs.size(); i++){
            res += to_string(strs[i].size()) + "#" + strs[i];
        }
        cout << res << endl;
        return res;
    }

    //format: size + # + str
    vector<string> decode(string str) {
        vector<string> ans;
        int i = 0;
        while(i < str.size()){
            int j = i;
            while(str[j] != '#'){
                j++;
            }
            int length = stoi(str.substr(i, j - i));
            i = j + 1;
            j = i + length;
            ans.push_back(str.substr(i, length));
            i = j;
        }
        return ans;
    }
};
