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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* node=new ListNode((l1->val+l2->val)%10);
        int carry=(l1->val+l2->val)/10;
        l1=l1->next;
        l2=l2->next;
        ListNode* n=node;
        // node->next=n;
        while(l1!=NULL && l2!=NULL){
            ListNode* temp=new ListNode(0);
            int sum=0;
            if(carry){
                sum=(l1->val+l2->val+carry)%10;
                carry=(l1->val+l2->val+carry)/10;}
            else {sum=(l1->val+l2->val)%10;
                carry=(l1->val+l2->val)/10;}
            temp->val=sum;
            n->next=temp;
            n=n->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            ListNode* temp=new ListNode(0);
            int sum=0;
            if(carry){
                sum=(l1->val+carry)%10;
                carry=(l1->val+carry)/10;}
            else {sum=l1->val%10;
                carry=l1->val/10;}
            temp->val=sum;
            n->next=temp;
            n=n->next;
            l1=l1->next;
        }
        while(l2!=NULL){
            ListNode* temp=new ListNode(0);
            int sum=0;
            if(carry){
                sum=(l2->val+carry)%10;
                carry=(l2->val+carry)/10;}
            else {sum=l2->val%10;
                carry=l2->val/10;}
            temp->val=sum;
            n->next=temp;
            n=n->next;
            l2=l2->next;
        }
        if(carry){
            ListNode* temp=new ListNode(carry);
            n->next=temp;
        }


        return node;
    }
};