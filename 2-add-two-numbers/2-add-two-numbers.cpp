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
    void rotate(vector<int> v,int l)
    {
        int i=0;
        while(i<l)
        {
            int temp=v[i];
            v[i]=v[l];
            v[l]=temp;
            i++;
            l--;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> a,b;
        while(l1)
        {
           a.push_back(l1->val);
            l1=l1->next;
        }
        while(l2)
        {
           b.push_back(l2->val);
            l2=l2->next;
        }
        
        int l=a.size(),n=b.size(),i=0;
        int carry=0;
     
        
        rotate(a,l-1);
        rotate(b,n-1);
        
        vector<int> res;
        
        while(i<l&&i<n)
        {
            int temp=a[i]+b[i]+carry;
            carry =temp/10;
            temp=temp%10;
            res.push_back(temp);
            i++;
        }
        while(i<l)
        {
            int temp=a[i]+carry;
             carry =temp/10;
            temp=temp%10;
            res.push_back(temp);
            i++;
        }
         while(i<n)
        {
            int temp=b[i]+carry;
             carry =temp/10;
            temp=temp%10;
            res.push_back(temp);
             i++;
        }
        if(carry)
            res.push_back(carry);
        
        rotate(res, res.size()-1);
        i=0;
         ListNode* head= new ListNode(0);
        ListNode* temp=head;
        
        while(i<res.size())
        {
             ListNode* t = new ListNode(res[i]);
             if (head == NULL) 
                 head = t;
            else
            {
               head->next=t;
                 head=t; 
            }
            i++;
     
        }
        return temp->next;
       // return head;
        
    }
};