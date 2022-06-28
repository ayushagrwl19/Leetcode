// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
     void cal(int S[],int m,int n,vector<long long int>& dp)
     {
         if(m==0)
         return ;
         cal(S,m-1,n,dp);
         for(int j=1;j<=n;j++)
              {
                  if(j-S[m-1]>=0)
                  dp[j]+=dp[j-S[m-1]];
              }
     }
    long long int count(int S[], int m, int n) {
          vector<long long int> dp(n+1,0);
          dp[0]=1;
          cal(S,m,n,dp);
        //   for(i=0;i<m;i++)
        //   {
        //       for(j=1;j<=n;j++)
        //       {
        //           if(j-S[i]>=0)
        //           dp[j]+=dp[j-S[i]];
        //       }
        //   }
          return dp[n];
        // code here.
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends