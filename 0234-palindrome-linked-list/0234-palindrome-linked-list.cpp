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
    bool isPalindrome(ListNode* head) {
        if(head==NULL && head->next==NULL)
        return true;
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* last=reverse(slow->next);
        
        ListNode* a=head;
        while(last!=NULL)
        {
            if(last->val!=a->val)
            return false;
            last=last->next;
            a=a->next;
        }
        return true;


    }
private:
    ListNode* reverse(ListNode* ptr)
    {
        ListNode* prev=NULL ,*next=NULL;
        while(ptr)
        {
            next=ptr->next;
            ptr->next=prev;
            prev=ptr;
            ptr=next;
        }
        return prev;
    }
};