// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
    long long int solve(int ind,vector<long long int> &dp)
    {
        if(ind<=1)
        return dp[ind]=1;
        if(dp[ind]!=-1)
        return dp[ind];
        long long int a=solve(ind-1,dp)%1000000007;
        long long int b=(ind-1)*(solve(ind-2,dp)%1000000007);
        b=b%1000000007;
        b=b+a;
        b=b%1000000007;
        return dp[ind]=b;
    }
public:
    int countFriendsPairings(int n) 
    { 
        // code here
        vector<long long int> dp(n+1,-1);
        long long int ans= solve(n,dp);
        int res=dp[n];
        return res;
    }
};    
 

// { Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 
  // } Driver Code Ends