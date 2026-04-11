class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hm; //key : num - value : count
        vector<int> ans;
        for(auto &num : nums){
            auto it = hm.find(num);
            if(it != hm.end()){
                it->second++;
            }
            hm.insert({num, 1});
        }

        for(auto& v: hm){
            if(v.second >= k){
                ans.push_back(v.first);
            }
        }
        return ans;
    }
};
