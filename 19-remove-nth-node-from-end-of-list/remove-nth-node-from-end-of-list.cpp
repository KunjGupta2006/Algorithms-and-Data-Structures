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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

       if(head->next==NULL) return NULL;
       ListNode* slow=head;
       ListNode* fast=head;
       int c=1;
       int l=1;
       while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        l++;
        c+=2;
       }
       if(fast==NULL) c--;
       if(n==c){head=head->next; return head;}
       slow=head;
       l=1;
       while(l<c-n &&slow!=NULL){
        slow=slow->next;
        l++;
       }
       if(!slow->next){return NULL;}
       ListNode* temp=slow->next;
       slow->next=temp->next;

       return head;
    }
};