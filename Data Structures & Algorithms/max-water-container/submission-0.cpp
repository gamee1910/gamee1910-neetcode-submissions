class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0, left = 0, right = heights.size() - 1;
        while(left < right){
            maxArea = max(maxArea, (right - left) * min(heights[left], heights[right]));

            if(heights[left] < heights[right]){
                left++;
            } else {
                right--;
            }
        }
        return maxArea;
    }
};
