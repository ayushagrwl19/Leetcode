// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// void store(Node* root,vector<int>* adj)
// {
//   if(root->left!=NULL)
//   {
//       adj[root->data].push_back(root->left->data);
//       adj[root->left->data].push_back(root->data);
//       store(root->left,adj);
//   }
   
//   if(root->right!=NULL)
//   {
//       adj[root->data].push_back(root->right->data);
//       adj[root->right->data].push_back(root->data);
//       store(root->right,adj);
//   }
   
// }
// class Solution{
//     public:
//     /* Should return minimum distance between a and b
//     in a tree with given root*/
//     int findDist(Node* root, int a, int b) {
//         // Your code here
//         vector<int> adj[100005];
//         store(root,adj);
//         queue<int>q;
//         q.push(a);
//         int vis[100005];
//         memset(vis,-1,sizeof(vis));
//         vis[a]=0;
//         while(!q.empty())
//         {
//             int p=q.front();
//             q.pop();
//             for(auto i:adj[p])
//             {
//                 if(vis[i]==-1)
//                 {
//                     vis[i]=vis[p]+1;
//                     q.push(i);
//                 }
//             }
//         }
        
//         return vis[b];
//     }
// };
vector<vector<int>>ans;
void path(Node* root,int a,int b,vector<int>v)
{
    if(!root)
    return ;
    v.push_back(root->data);
    if(root->data==a||root->data==b)
    {
        ans.push_back(v);
    }
    path(root->left,a,b,v);
    path(root->right,a,b,v);
    v.pop_back();
}
class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    int findDist(Node* root, int a, int b) {
        ans.clear();
        if(!root)
        return 0;
        vector<int>v;
        path(root,a,b,v);
        int d=min(ans[0].size(),ans[1].size());
        for(int i=0;i<d;i++)
        {
            if(ans[0][i]!=ans[1][i])
            {
                return (ans[0].size()+ans[1].size()-2)-2*(i-1);
            }
        }
        int k=ans[0].size();
        int k1=ans[1].size();
        return abs(k-k1);
    }
};

// { Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        int n1, n2;
        scanf("%d %d ", &n1, &n2);
        Solution ob;
        cout << ob.findDist(root, n1, n2) << endl;
     
    }
    return 0;
}
  // } Driver Code Ends