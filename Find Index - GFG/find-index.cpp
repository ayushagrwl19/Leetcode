// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        //code here.
        int f=-1,l=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                if(f==-1)
                f=i;
                l=i;
            }
        }
        vector<int> v;
        v.push_back(f);
        v.push_back(l);
        return v;
        
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
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}
  // } Driver Code Ends