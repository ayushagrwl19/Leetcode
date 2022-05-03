class Solution {
public:
    vector<int> sumZero(int n) {
        int d=n/2,i;
        vector<int>v;
        for(i=-d;i<=-1;i++)
            v.push_back(i);
        if(n%2!=0)
            v.push_back(0);
        d=n/2;
        for(i=d;i>=1;i--)
            v.push_back(i);
        return v;
    }
};