// Idea: while the character is not found in the string keep reversing and add it the characters to another string,
//       then at last add the remaing string to the reversed string


class Solution {
public:
    string reversePrefix(string word, char ch) {
        int x=word.size(),i=0;
        string rev;
        rev.clear();
        while(i<x)
        {
            if(word[i]!=ch){
                rev = word[i] + rev;
                i++;
            }
            else
                break;
        }
        if(i>=x)
            return word;
        else
            rev = word[i++] + rev;
        while(i<x)
        {
            rev += word[i];
            i++;
        }
        return rev;
    }
};
