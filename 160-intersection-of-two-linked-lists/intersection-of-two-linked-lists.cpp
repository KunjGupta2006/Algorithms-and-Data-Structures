/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int sz(ListNode* node){
    int size=0;
    while(node!=NULL){
        size++;
        node=node->next;
    }
    return size;
}

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        int sa=sz(headA);
        int sb=sz(headB);
        ListNode* tempa=headA;
        ListNode* tempb=headB;
        int diff=0;
        
        if(sa>=sb){
            diff=sa-sb;
            for(int i=0;i<diff;i++){
                tempa=tempa->next;
            }
        }else{
            diff=sb-sa;
            for(int i=0;i<diff;i++){
                tempb=tempb->next;
            }
        }
        
        if(tempa==tempb) return tempa;
        while(tempa!=NULL && tempb!=NULL){
            if(tempa->next==tempb->next){return tempa->next;}
            tempa=tempa->next;
            tempb=tempb->next;
        }
        return NULL;

    }
};