class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int>st;
        vector<int>ans;
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
                    ans.push_back(st.top());
                    ans.push_back(i);
                }
                st.pop();
            }
        }
        int j=0;
        string res="";
        for(int i=0;i<s.length();i++)
        {
            if(ans[j]==i)
            {
                j++;
            }
            else
            {
                res+=s[i];
            }
        }
        return res;
        
    }
};