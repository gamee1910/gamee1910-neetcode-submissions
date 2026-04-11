class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> ans(n);

        for(int i = 0; i < n; i++){
            ans[i] = ans[i - 1] * nums[i];
            cout << ans[i] << endl;
        }
        return ans;
    }
};
