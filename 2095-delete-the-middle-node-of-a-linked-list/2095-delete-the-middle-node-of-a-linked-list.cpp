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
    ListNode* deleteMiddle(ListNode* head) {
        
         if (head == NULL) {
          return NULL;
       }
       if (head->next == NULL) {
          delete head;
          return NULL;
       }
        
        ListNode *fast=head;
        ListNode *slow=head;
        
     //   ListNode *temp=head;
        
        
        
        while(slow->next != NULL && fast!=NULL && fast->next != NULL)
        {
            if(fast!=head)
                slow=slow->next;
            fast=fast->next->next;
            
        }
        ListNode *temp=slow->next;
       
       slow->next=slow->next->next;
        delete temp;
        
        return head;
        
        
    }
};