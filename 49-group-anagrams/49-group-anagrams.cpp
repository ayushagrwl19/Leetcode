class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>>mp;
         vector<vector<string>> ans;
          for(auto i:strs)
          {
              vector<int>v(123,0);
              for(int j=0;j<i.length();j++)
              {
                  v[i[j]]++;
              }
              mp[v].push_back(i);
          }
        for(auto i:mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};