class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
         vector<vector<string>> ans;
          for(auto i:strs)
          {
              string s=i;
              sort(s.begin(),s.end());
              mp[s].push_back(i);
          }
        for(auto i:mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};