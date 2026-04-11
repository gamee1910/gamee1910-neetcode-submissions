class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while(left < right){
            while(left < right && !isalpha(s[left])){
                left++;
            }

            while(left < right && !isalpha(s[right])){
                right--;
            }

            if(left < right && tolower(s[left]) != tolower(s[right])){
                return false;
            }
        }
        return true;
    }
};
