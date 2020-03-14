// Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

//     Open brackets must be closed by the same type of brackets.
//     Open brackets must be closed in the correct order.

// Note that an empty string is also considered valid.

// Example 1:

// Input: "()"
// Output: true

// Example 2:

// Input: "()[]{}"
// Output: true

// Example 3:

// Input: "(]"
// Output: false

// Example 4:

// Input: "([)]"
// Output: false

// Example 5:

// Input: "{[]}"
// Output: true


class Solution {
public:
    bool isValid(string s) {
       stack<char>stack;                  //stack
        
        for (char c: s){
            if (c=='(' || c=='[' || c=='{'){  // if we have either of these 
                stack.push(c);                //push
            }else {
            
            if (stack.empty()) return false ;          //if empty false
            if (c==')' && stack.top()!='(') return false;  //if ) is there in the stack and top is not ( then return false 
            if (c==']' && stack.top()!='[') return false;  //same for others as well
            if (c=='}' && stack.top()!='{') return false;
            stack.pop();                                    //pop why? if something else is there just pop it 
            }
        
        }
        
        return stack.empty();                              // if nothing is matching then retrun empty 
    }

    };

