class Solution {
public:
    int maxProfit(vector<int>& p) {
        int i=0,n=p.size(),m=p[0],ans=0;
        for(i=1;i<n;i++)
        {
            ans=max(ans,p[i]-m);
            m=min(m,p[i]);
        }
        return ans;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};