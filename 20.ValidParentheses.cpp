//Idea: Push opening brackets into the stack and whenever encounter a closing bracket pop the top element and comapre it.

class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        int n = s.size(),i=0;
        while(i<n)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                p.push(s[i]);
            else if(s[i]==')' || s[i]==']' || s[i]=='}')
                if(p.empty())
                    return 0;
            else{
                char c=p.top();
                p.pop();
                if(s[i]==')' && c!='(')
                    return 0;
                if(s[i]==']' && c!='[')
                    return 0;
                if(s[i]=='}' && c!='{')
                    return 0;
            }
            i++;
        }
        if(!p.empty())
            return 0;
        return 1;
    }
};
