class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        //[1,2,4,6]
        //[0,1,2,3]
        int sum = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n;j++){
                if(i == j){
                    continue;
                }
                sum *= nums[j] ;
            }
            ans.push_back(sum);
            sum = 1;
        }
        return ans;
    }
};
