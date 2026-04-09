class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hm;
        for(auto &num: nums){
            hm[num]++;
        }

        vector<pair<int, int>> vec(hm.begin(), hm.end());

        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b){
            return a.second > b.second;
        });

        vector<int> res;
        for(int i = 0; i < k;i++){
            res.push_back(vec[i].first);
        }

        return res;
    }
};
