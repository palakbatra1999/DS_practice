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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        ListNode* prev=NULL;
       
        while(temp)
        {
            if(temp->val==val)
            {
               if(prev==NULL)
               {
                   head=head->next;
                   temp=head;
               }
                else
                {
                    if(temp->next!=NULL)
                    {
                        ListNode *c=temp->next;
                        prev->next=c;
                        temp=c;
                    }
                    else
                    {
                        prev->next=NULL;
                        prev=temp;
                        temp=temp->next;
                    }
                }
                
            }
            else
            {
                prev=temp;
                temp=temp->next;
            }
            
        }
        return head;
    }
};