class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& res, int veg, int mp, int md) {
        vector<vector<int>>out;
        for(int i=0;i<res.size();i++){
            if(res[i][2]>=veg){
                if(res[i][3]<=mp && res[i][4]<=md){
                    out.push_back({res[i][1],res[i][0]});
                }
            }
        }
        sort(out.begin(),out.end(),greater());
        vector<int>ans;
        for(int i=0;i<out.size();i++){
            ans.push_back(out[i][1]);
        }
        return ans;
        
    }
};