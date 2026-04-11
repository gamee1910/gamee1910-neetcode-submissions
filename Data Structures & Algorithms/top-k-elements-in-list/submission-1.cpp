class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> hm;
        
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            auto it = hm.find(nums[i]); 
            if(it != hm.end()) {
                it->second += 1; 
            } else {
                hm.insert({nums[i], 1});
            }
        }

        for(auto &pair : hm){
            auto key = pair.first, value = pair.second;
            if(value >= k){
                ans.push_back(key);
            }
        }
        return ans;
    }
};
