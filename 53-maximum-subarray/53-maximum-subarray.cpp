class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),i,j,m;
        j=m=nums[0];
        for(int i=1;i<n;i++)
        {
            j=max(j+nums[i],nums[i]);
            m=max(m,j);
        }
        return m;
        
    }
};