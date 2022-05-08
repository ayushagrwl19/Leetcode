class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char,int>mp;
        int i=0,j=0,ans=0,n=s.length();
        while(i<n)
        {
            mp[s[i]]++;
            while(mp['a']>0&&mp['b']>0&&mp['c']>0)
            {
                ans+=n-i;
                mp[s[j]]--;
                j++;
            }
            i++;
        }
        return ans;
    }
};