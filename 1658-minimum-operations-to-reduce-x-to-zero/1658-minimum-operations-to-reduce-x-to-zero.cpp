class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size(),i,j,k=0,ans=1000000;
        int pre[n+1];
        pre[0]=0;
        for(i=1;i<=n;i++)
            pre[i]=pre[i-1]+nums[i-1];
        for(i=n;i>=1;i--)
        {
            if(binary_search(pre,pre+i+1,x-k))
            {
                int l=lower_bound(pre,pre+i+1,x-k)-pre;
                ans=min(ans,l+n-i);
                    
            }
            k=k+nums[i-1];
            if(k>x)
                break;
        }
        if(ans==1000000)
            ans=-1;
        return ans;
    }
};