class Solution {
    public boolean hasDuplicate(int[] nums) {
        int count = 0, compareValue = 0;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == compareValue){
                count++;
                compareValue = nums[i];
            }else {
                compareValue = nums[i];
            }
        }

//1,2,3,3
//i = 0: nums[i] = 1 compareValue = 0 | false => compareValue = 1
//i = 1: nums[i] = 2 compareValue = 1 | false => compareValue = 2
//i = 2: nums[i] = 3 compareValue = 3 | false =
        if(count >= 1){
            return true;
        } 
        return false;
    }
}

