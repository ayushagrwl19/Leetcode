class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
       int a[123]={0};
        vector<string> ans;
        for(auto i:words2)
        {
            int b[123]={0};
            for(auto j:i)
                b[j]++;
            for(int j=97;j<=122;j++)
                a[j]=max(a[j],b[j]);
        }
        for(auto i:words1)
        {
            int b[123]={0},f=0;
            for(auto j:i)
                b[j]++;
            for(int j=97;j<=122;j++)
            {
                if(b[j]<a[j])
                    f=1;
            }
            if(f==0)
                ans.push_back(i);
        }
        return ans;
    }
};