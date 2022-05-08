class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string p) {
        vector<bool> ans;
        int i,j,k;
        p.push_back('.');
        for(auto i:queries)
        {
            j=0;k=0;
            while(j<i.length()&&k<p.length())
            {
                if(i[j]==p[k])
                {
                    j++;
                    k++;
                }
                else if(i[j]>=97&&i[j]<=122)
                {
                    j++;
                }
                else
                    break;
            }
            if(j==i.length()&&k==p.length()-1)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};