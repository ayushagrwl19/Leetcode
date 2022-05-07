class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
        vector<string> ans;
        for(auto i:words)
        {
            int a[123]={0},f=0;
            
            for(int j=0;j<i.length();j++)
            {
                if(a[i[j]]==0)
                    a[i[j]]=p[j];
                else if(a[i[j]]!=p[j])
                    f=1;
            }
             memset(a,0,sizeof(a));
            
            for(int j=0;j<i.length();j++)
            {
                if(a[p[j]]==0)
                    a[p[j]]=i[j];
                else if(a[p[j]]!=i[j])
                    f=1;
            }
            if(f==0)
                ans.push_back(i);
                
        }
        return ans;
    }
};