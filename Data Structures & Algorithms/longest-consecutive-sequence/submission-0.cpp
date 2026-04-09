class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> hs(nums.begin(), nums.end());
        for(const int& num: nums){
            if(!hs.count(num - 1)){
                int idx = num, len = 1;
                while(hs.count(idx + 1)){
                    idx++;
                    len++;
                }

                ans = max(ans, len); 
            }
        }
        return ans;
    }
};
