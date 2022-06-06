/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     map<ListNode*,int>mp;
        ListNode* ans=NULL;
        while(headA!=NULL)
        {
            mp[headA]=1;
            headA=headA->next;
        }
        while(headB!=NULL)
        {
            if(mp[headB]==1)
            {
                ans=headB;
                break;
            }
            headB=headB->next;
        }
        return ans;
    }
};