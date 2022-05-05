class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp;
        int ans=0;
        for(auto i:s)
            mp[i]++;
        for(auto i:t)
            mp[i]--;
        for(auto i:mp)
        {
            ans+=max(0,i.second);
        }
        return ans;
    }
};