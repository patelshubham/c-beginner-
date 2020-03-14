// //Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Example 1:

// Input: ["flower","flow","flight"]
// Output: "fl"

// Example 2:

// Input: ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

// Note:

// All given inputs are in lowercase letters a-z.




class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {     // this is given
        string longestCommonPrefix ="";                    //let's intiliaze to return nothing because if it doesn't match , it returns nothing 
        if (strs.size()==0 ){                              // if string size is 0 then obviously we'll return nothing 
            return longestCommonPrefix;
        }
        
        int index =0;
        for(char c: strs[0]){                               // range based for loop for first word in strings of array it will take characters
            for(int i=1;i<strs.size();i++){                 // first word we checked , so this for loop is form second word
                if(index >= strs[i].length() || c != strs[i].at(index)){         //if index is greater than intilazied previous index means first word has 3 chars and second word is having 4th char then we need to stop or chars are not matching then also we need to stop
                return longestCommonPrefix;
    }
    }
    longestCommonPrefix +=c;                                   // appending value of character if there is actual chars to compare
    index++;                                                   //every time index should be updated
    
}
      return longestCommonPrefix;
        
    }
};
