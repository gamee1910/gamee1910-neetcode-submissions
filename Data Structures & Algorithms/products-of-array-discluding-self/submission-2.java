class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length, sum = 1;
        int[] ans = new int[n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j) continue;
                sum *= nums[j];
            }
            ans[i] = sum;
            sum = 1;
        }
        return ans;
    }
}  
