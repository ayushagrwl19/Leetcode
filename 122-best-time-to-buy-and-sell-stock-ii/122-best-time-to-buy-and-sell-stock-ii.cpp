class Solution {
public:
    int maxProfit(vector<int>& p) {
        int i,j,n=p.size(),b=p[0],s,ans=0;
        for(i=1;i<n;i++)
        {
            if(p[i]<=p[i-1])
                b=p[i];
            else
            {
                s=p[i];
                ans+=s-b;
                b=p[i];
            }
                
        }
        return ans;
    }
};