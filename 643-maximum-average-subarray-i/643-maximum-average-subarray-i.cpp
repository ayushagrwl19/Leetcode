class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long int s=0;
        for(int i=0;i<k;i++)
        {
            s=s+nums[i];
        }
        long long int ans=s;
        for(int i=k;i<nums.size();i++)
        {
            s=s+nums[i];
            s=s-nums[i-k];
            ans=max(ans,s);
            
        }
        double d=(ans*1.00)/k;
        return d;
        
    }
};