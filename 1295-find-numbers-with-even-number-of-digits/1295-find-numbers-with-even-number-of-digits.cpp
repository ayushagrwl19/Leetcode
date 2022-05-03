class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(auto i:nums)
        {
            if(i>=10&&i<=99)
                c++;
            else if(i>=1000&&i<=9999)
                c++;
            else if(i>=100000&&i<=999999)
                c++;
            
        }
        return c;
    }
};