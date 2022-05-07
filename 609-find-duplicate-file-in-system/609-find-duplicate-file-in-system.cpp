class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        map<string,vector<string>>mp;
        vector<vector<string>> v;
        for(auto i:paths)
        {
            string s,x,y;
            int p=0;
            for(int j=0;j<i.length();j++)
            {
                if(i[j]==' ')
                {
                    s=i.substr(p,j);
                    p=j+1;
                }
                else if(i[j]=='(')
                {
                    x=i.substr(p,j-p);
                    p=j+1;
                }
                else if(i[j]==')')
                {
                    y=i.substr(p,j-p);
                    string h=s+"/";
                    h=h+x;
                    mp[y].push_back(h);
                    p=j+2;
                    j++;
                }
            }
            
            
        }
        for(auto i:mp)
        {
            if(i.second.size()>1)
                v.push_back(i.second);
                
            
        }
        return v;
    }
};