// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
int ans1,ans2;
void bs1(int a[],int l,int r,int x)
{
    while(l<=r)
    {
       int mid=(l+r)/2;
       if(a[mid]<=x)
       {
           ans1=mid;
           l=mid+1;
       }
       else
       {
           r=mid-1;
       }
    }
}
void bs2(int a[],int l,int r,int x)
{
    while(l<=r)
    {
       int mid=(l+r)/2;
       if(a[mid]<x)
       {
           l=mid+1;
       }
       else
       {
           ans2=mid;
           r=mid-1;
       }
    }
}
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
	    ans1=-1;
	    ans2=n;
	    bs1(arr,0,n-1,x);
	    bs2(arr,0,n-1,x);
	    vector<int>v;
	    v.push_back(ans1+1);
	    v.push_back(n-ans2);
	    return v;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
  // } Driver Code Ends