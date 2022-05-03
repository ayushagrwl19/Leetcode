class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        map<pair<int,int>,int>mp;
        int n=grid.size();
        int m=grid[0].size();
        pair<int,int>p;
        int c;
        for(int i=0;i<n;i++)
        {
            p={-1,-1};
            c=0;
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    if(c>0)
                        mp[p]=1;
                    p={i,j};
                    c++;
                }
            }
            if(c>1)
                mp[p]=1;
        }
        for(int j=0;j<m;j++)
        {
            p={-1,-1};
            c=0;
            for(int i=0;i<n;i++)
            {
                if(grid[i][j]==1)
                {
                    if(c>0)
                        mp[p]=1;
                    p={i,j};
                    c++;
                    cout<<c;
                }
            }
            if(c>1)
                mp[p]=1;
        }
        int ans=0;
        for(auto i:mp)
            ans++;
        return ans;
        
    }
};