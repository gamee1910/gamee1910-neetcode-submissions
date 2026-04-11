class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        int i = 0, left = 1, right = n - 1;
        sort(nums.begin(), nums.end());
        vector<int> sub;
        vector<vector<int>> ans;
        while(i < n){
            int sum = nums[i] + nums[left] + nums[right];
            if(sum < 0){
                left++
            } else if(sum > 0){
                right--;
            } else {
                sub.push_back(sum);
                left++;
                right--;
            }
            ans.push_back(sub);
        }
        return ans;
    }
};