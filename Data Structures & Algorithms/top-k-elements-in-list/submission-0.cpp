class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> hm;
        
        int count = 1, n = nums.size();
        for(int i = 0; i < n; i++){
            if(hm.find(nums[i]) != hm.end()){
                hm[nums[i]] += count++;
            } else {
                hm.insert({nums[i], count});
            }
            cout << nums[i] << count << endl;
        }

     


        return ans;
    }
};
