class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        long long int s=0;
        int ans=0;
        for(int i=0;i<k;i++)
            s=s+arr[i];
        if(s>=k*t)
            ans++;
        for(int i=k;i<arr.size();i++)
        {
            s=s+arr[i];
            s=s-arr[i-k];
            if(s>=k*t)
                ans++;
        }
        return ans;
        
    }
};