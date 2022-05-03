// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int f=1;
    	for(int i=0;i<n;i++)
    	{
    	int j=0,k=a[i];
    	while(k>0)
    	{
    	    j=j*10;
    	    j=j+k%10;
    	    k=k/10;
    	}
    	if(j!=a[i])
    	f=0;
    	}
    	return f;
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends