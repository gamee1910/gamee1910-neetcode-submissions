class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for(Integer index : nums){
            if(set.contains(index)){
                return true;
            }
            set.add(index);
        }
        return false;
    }
}
