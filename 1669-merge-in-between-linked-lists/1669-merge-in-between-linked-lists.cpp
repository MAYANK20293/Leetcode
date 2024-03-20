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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* l=list2;
        while(l->next!=NULL)
        l=l->next;
        ListNode* c=list1;
        ListNode* d=list1->next;
        int i=1;
        while(a-i)
        {
            c=c->next;
            d=d->next;
            i++;
        }
        c->next=NULL;
        c->next=list2;
        while(b-i)
        {
            d=d->next;
            i++;
        }
        ListNode* f=d->next;
        d->next==NULL;
        ListNode* e=d->next;
        l->next=f;
        return list1;
        
    }
};