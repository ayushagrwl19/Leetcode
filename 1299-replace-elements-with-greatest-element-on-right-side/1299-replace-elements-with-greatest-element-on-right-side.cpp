class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
      int n=arr.size();
        int j=arr[n-1];
        arr[n-1]=-1;
        for(int i=n-2;i>=0;i--)
        {
            int k=arr[i];
            arr[i]=j;
            j=max(j,k);
        }
        return arr;
    }
};