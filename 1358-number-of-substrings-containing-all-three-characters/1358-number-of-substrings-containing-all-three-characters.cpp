class Solution {
public:
    int numberOfSubstrings(string s) {
        int mp[3]={0};
        int i=0,j=0,ans=0,n=s.length();
        while(i<n)
        {
            mp[s[i]-'a']++;
            while(mp[0]>0&&mp[1]>0&&mp[2]>0)
            {
                ans+=n-i;
                mp[s[j]-'a']--;
                j++;
            }
            i++;
        }
        return ans;
    }
};