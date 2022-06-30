int solve(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp)
{
    if(i<0||j<0)
        return 0;
    if(grid[i][j]==1)
        return dp[i][j]=0;
    if(i==0&&j==0)
        return 1;
    
       if(dp[i][j]!=-1)
        return dp[i][j];
    
    
    return dp[i][j]=solve(i-1,j,grid,dp)+solve(i,j-1,grid,dp);
    
}
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),i,j;
        vector<vector<int>>dp(n,vector<int>(m,0));
        // return solve(n-1,m-1,grid,dp);
        for(int i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                    dp[i][j]=0;
                else if(i==0&&j==0)
                    dp[i][j]=1;
                else
                {
                    if(i-1>=0)
                    dp[i][j]+=dp[i-1][j];
                    if(j-1>=0)
                    dp[i][j]+=dp[i][j-1];
                }
            }
        }
            return dp[n-1][m-1];
    }
};