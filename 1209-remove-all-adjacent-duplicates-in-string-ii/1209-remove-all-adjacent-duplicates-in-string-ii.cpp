class Solution {
public:
    string removeDuplicates(string s, int k) {
     int i,j=1,n=s.length();
        stack<pair<int,int>>st;
        string ans;
        for(i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push({s[i],1});
                continue;
            }
            auto p=st.top();
            int d=p.first;
            int c=p.second;
            st.pop();
            if(s[i]==d)
            {
                st.push({d,c+1});
            }
            else
            {
                c=c%k;
                if(c!=0)
                {
                    st.push({d,c});
                    st.push({s[i],1});
                }
                else
                {
                    if(st.size()>0&&st.top().first==s[i])
                    {
                        int f=st.top().second;
                        st.pop();
                        st.push({s[i],f+1});
                    }
                    else
                    {
                        st.push({s[i],1});
                    }
                }
            }
        }
        if(st.size()>0)
        {
            
         auto p=st.top();
            st.pop();
            int c=p.second%k;
            if(c>0)
                st.push({p.first,c});
        }
        while(!st.empty())
        {
            auto p=st.top();
            st.pop();
            while(p.second>0)
            {
                ans.push_back(p.first);
                p.second--;
            }
        }
        i=0;
        j=ans.length()-1;
        while(i<j)
        {
            swap(ans[i],ans[j]);
            i++;
            j--;
        }
        return ans;
        
    }
};