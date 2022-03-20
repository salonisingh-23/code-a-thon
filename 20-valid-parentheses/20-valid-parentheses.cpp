class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char ch,top;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='('||ch=='{'||ch=='['){
                st.push(ch);
        }
            else
            {
                if(!st.empty()){
                     top=st.top();
                    if((ch==')'&&top=='(')||(ch=='}'&&top=='{')||(ch==']'&&top=='['))
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
    }
        if(st.empty())
            return true;
        else
            return false;
    }
};