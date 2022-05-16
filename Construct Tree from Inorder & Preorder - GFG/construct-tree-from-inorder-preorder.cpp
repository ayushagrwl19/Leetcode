// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
int j;
void solve(int in[],int pre[],int l,int r,Node* ptr,int vis[],int n)
{
    ptr->data=pre[j];
   // cout<<j<<" "<<l<<" "<<r<<endl;;
    vis[j]=1;
    Node *left=(Node*) malloc(sizeof(Node));
    Node *right=(Node*) malloc(sizeof(Node));
    
    int i,k;
    for( i=l;i<=r;i++)
    {
        if(in[i]==pre[j])
        {
           k=i;
           break;
        }
    }
    j++;
    if(l<=i-1)
    {
        ptr->left=left;
        solve(in,pre,l,i-1,left,vis,n);
    }
    else
    ptr->left=NULL;
   if(i+1<=r)
   {
       ptr->right=right;
       solve(in,pre,i+1,r,right,vis,n);

   }
   else
   ptr->right=NULL;
}
    
class Solution{
    public:
    Node* buildTree(int in[],int pre[], int n)
    { 
        // Code here
        int vis[n]={0};
        Node *root=(Node*) malloc(sizeof(Node));
        j=0;
        solve(in,pre,0,n-1,root,vis,n);
        return root;
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
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends