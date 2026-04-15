class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while(left < right){
            const int sum = numbers[left] + numbers[right];
            if(sum == target){
                return {numbers[left], numbers[right]};
            } 
            if(sum > target){
                right--;
            } else {
                left++;
            }
        }
        return {};
    }
};
