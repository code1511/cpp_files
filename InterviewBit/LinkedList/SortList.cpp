//link https://www.interviewbit.com/problems/sort-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* merge(ListNode* a,ListNode* b){
    if(!a)
     return b;
    if(!b)
     return a;
    ListNode*r; 
    if(a->val <= b->val){
        r=a;
        r->next=merge(a->next,b);
    }else{
        r=b;
        r->next=merge(a,b->next);
    } 
    return r;
} 
ListNode* Solution::sortList(ListNode* head) {
    if(!head || !head->next) return head;
    ListNode*tmp=head;
    ListNode*slow=head;
    ListNode*fast=head;
    while(fast && fast->next){
        tmp=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    tmp->next=nullptr;
    
    ListNode*left=sortList(head);
    ListNode*right=sortList(slow);
    
    return merge(left,right);
    
}
