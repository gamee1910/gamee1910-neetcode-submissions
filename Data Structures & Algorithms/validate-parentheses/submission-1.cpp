class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> map = {
            {']', '['},
            {'}', '{'},
            {')', '('}
        };

        for(const char& c: s){
            if(map.count(c)){
                if(!stack.empty() && map[c] == stack.top()){
                    stack.pop();
                } else {
                    return false;
                }
            } else {
                stack.push(c);
            }
        }

        return stack.empty();
    }
};  
