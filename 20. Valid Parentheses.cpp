class Solution {
public:
    bool isValid(string s) {
        vector<char> st;
        for(char c: s){
            if(c == '(' || c == '{' || c == '['){
                st.push_back(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                if ((c == ')' && st.back() == '(') || (c == '}' && st.back() == '{') || (c == ']' && st.back() == '[')){
                    st.pop_back();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty() ? true : false;
    }
};

// The approach uses a stack to keep track of the opening brackets. When a closing bracket is encountered, it checks if it matches the top of the stack. If it does, it pops the stack; otherwise, it returns false. At the end, if the stack is empty, all brackets were matched correctly. The time complexity is O(n) and the space complexity is O(n).

/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false

 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/
