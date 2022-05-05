class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(i+2<n&&s[i+2]=='#')
            {
                int d=stoi(s.substr(i,2));
                ans.push_back(d+96);
                i+=2;
            }
            else
            {
                int d=stoi(s.substr(i,1));
                ans.push_back(d+96);
            }
        }
        return ans;
    }
};