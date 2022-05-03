class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int l=nums[0],sl=0,ind=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>l)
            {
                sl=l;
                ind=i;
                l=nums[i];
            }
            else if(nums[i]>sl)
            {
                sl=nums[i];
            }
        }
        if(l>=2*sl)
            return ind;
        return -1;
        
    }
};