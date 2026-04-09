class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> hm;
        for(auto num: nums){
            hm[num]++;
        }

        for(auto val: hm){
            if(val.second  > n / 2){
                return val.first;
            }
        }
        return -1;
    }
};