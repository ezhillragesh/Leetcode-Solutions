#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stack;
        char one = '(';
        char two = '{';
        char three = '[';
        for (auto it : s) {
            if (it == one || it == two || it == three) {
                stack.push(it);
            } else {
                if (stack.empty()) {
                    return false;
                } else {
                    char top = stack.top();
                    if ((it == ')' && top == '(') || (it == '}' && top == '{') || (it == ']' && top == '[')) {
                        stack.pop();
                    } else {
                        return false; 
                    }
                }
            }
        }

        return stack.empty(); 
    }
};
