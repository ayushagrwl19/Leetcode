class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size(),i,j,k=0,ans=-1,l;
        for(i=0;i<n;i++)
            k=k+nums[i];
        k=k-x;
        l=0;i=0;j=-1;
        while(i<n)
        {
            l=l+nums[i];
            
            while(l>k&&j<i)
            {
                j++;
                l=l-nums[j];
            }
            if(l==k)
            {
                ans=max(ans,i-j);
            }
            i++;
        }
        if(ans==-1)
            return ans;
        else
            ans=n-ans;
        return ans;
    }
};