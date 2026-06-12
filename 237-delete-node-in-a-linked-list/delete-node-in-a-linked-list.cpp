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
    void deleteNode(ListNode* node) {
        ListNode* temp=new ListNode(node->val);
        temp=node;
        node=node->next;
        while(node!=NULL){
            if(node->next==NULL){temp->val=node->val; temp->next=NULL; break;}
            temp->val=node->val;
            node=node->next;
            temp=temp->next;
        }
    }
};