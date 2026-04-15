class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 1, right = numbers.size();
        while(left < right){
            const int sum = numbers[left] + numbers[right];
            if(sum == target){
                return {left, right};
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
