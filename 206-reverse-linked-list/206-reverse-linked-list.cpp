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
    ListNode* reverse(ListNode* temp)
    {
        if(temp==NULL||temp->next==NULL)
            return temp;   
      ListNode* ans=reverse(temp->next);
          ListNode* c=temp->next;
       c->next=temp;
        temp->next=NULL;
        return ans;
      
    }
    ListNode* reverseList(ListNode* head) {
        
      
        
       return  reverse(head);
    }
};