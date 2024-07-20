/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode* prev=node;
    while(node->next!=NULL){
        prev=node;
        node->val=node->next->val;
        node=node->next;
    }
    prev->next=NULL;
    
}
