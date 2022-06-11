class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int>f,ans;
        map<int,int>ind;
        int j=0;
        for(auto i:intervals)
        {
            f.push_back(i[0]);
            ind[i[0]]=j;
            j++;
        }
        sort(f.begin(),f.end());
        for(auto i:intervals)
        {
            int l=lower_bound(f.begin(),f.end(),i[1])-f.begin();
            if(l==f.size())
                ans.push_back(-1);
            else
                ans.push_back(ind[f[l]]);
        }
        return ans;
    }
};