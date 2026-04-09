class Solution {
    public int removeElement(int[] nums, int val) {
        int n = nums.length, pointer = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] != val){
                nums[pointer++] = nums[i];
            }
        }
        return pointer;
    }
}