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
unordered_map<int,int>mp;
void solve(int in[],int pre[],int l,int r,Node* ptr)
{
    ptr->data=pre[j];
    Node *left=(Node*) malloc(sizeof(Node));
    Node *right=(Node*) malloc(sizeof(Node));
    
    int i=mp[pre[j]];
    j++;
    if(l<=i-1)
    {
        ptr->left=left;
        solve(in,pre,l,i-1,left);
    }
    else
    ptr->left=NULL;
   if(i+1<=r)
   {
       ptr->right=right;
       solve(in,pre,i+1,r,right);

   }
   else
   ptr->right=NULL;
}
    
class Solution{
    public:
    Node* buildTree(int in[],int pre[], int n)
    { 
        // Code here
        Node *root=(Node*) malloc(sizeof(Node));
        j=0;
        mp.clear();
        for(int i=0;i<n;i++)
        mp[in[i]]=i;
        solve(in,pre,0,n-1,root);
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