/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<int>v;
        ListNode* f=head;
        int c=0,i;
        while(f!=NULL)
        {
            c++;
            f=f->next;
        }
        int extra=c%k;
        int size=c/k;
        for(i=0;i<k;i++)
        {
            if(extra>0)
            {
                v.push_back(size+1);
                extra--;
            }
            else
            {
                v.push_back(size);
            }
        }
        for(auto i:v)
            cout<<i;
        f=head;
        vector<ListNode*> ans;
        c=0;
        i=0;
        ListNode* g;
        while(f!=NULL)
        {
            if(c==0)
                ans.push_back(f);
         c++;
            if(c==v[i])
            {
                c=0;
                i++;
                g=f->next;
                f->next=NULL;
                f=g;
            }
            else
            {
            f=f->next;
            }
            
        }
        while(ans.size()<k)
        {
            g=NULL;
            ans.push_back(g);
        }
        return ans;
    }
};