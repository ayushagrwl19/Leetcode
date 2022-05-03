// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<string> numberPattern(int n)
    {
        // Write Your Code here
        vector<string>ans;
        for(int i=1;i<=n;i++)
        {
            string s="";
            for(int j=1;j<=i;j++)
            s=s+to_string(j);
            for(int j=i-1;j>=1;j--)
            s=s+to_string(j);
            ans.push_back(s);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
       
        Solution ob;
        vector<string> res = ob.numberPattern(N);
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    
    }
    return 0;
}  // } Driver Code Ends