class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int>st;
        vector<int> ans(s.length()+1,0);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else
            {
                if(st.size()==1)
                {
                    ans[st.top()]=1;
                    ans[i]=1;
                }
                st.pop();
            }
        }
        string res="";
        for(int i=0;i<s.length();i++)
        {
            if(ans[i]==0)
            {
                res+=s[i];
            }
        }
        return res;
        
    }
};