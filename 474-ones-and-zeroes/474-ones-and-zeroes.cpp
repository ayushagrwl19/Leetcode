class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
       int N=strs.size(),i,j,k;
        vector<pair<int,int>>v;
        for(i=0;i<N;i++)
        {
            int d=0;
            for(j=0;j<strs[i].length();j++)
            {
                if(strs[i][j]=='0')
                    d++;
            }
            v.push_back({d,strs[i].length()-d});
        }
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        for(i=0;i<N;i++)
        {
            for(j=m;j>=0;j--)
            {
                for(k=n;k>=0;k--)
                {
                    if(j-v[i].first>=0&&k-v[i].second>=0)
                    {
                        dp[j][k]=max(dp[j][k],dp[j-v[i].first][k-v[i].second]+1);
                    }
                }
            }
        }
        return dp[m][n];
        
    }
};