class Solution {
public:
    int minSteps(string s, string t) {
        int mp[123]={0};
        int ans=0;
        for(auto i:s)
            mp[i]++;
        for(auto i:t)
            mp[i]--;
        for(int i=0;i<123;i++)
        {
            ans+=max(0,mp[i]);
        }
        return ans;
    }
};