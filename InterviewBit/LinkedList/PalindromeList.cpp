// Given a singly linked list, determine if its a palindrome. Return 1 or 0 denoting if its a palindrome or not, respectively.

// Notes:

// Expected solution is linear in time and constant in space.
// For example,

// List 1-->2-->1 is a palindrome.
// List 1-->2-->3 is not a palindrome.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* head) {
    stack<int>s;
    ListNode*tmp=head;
    while(tmp){
        s.push(tmp->val);
        tmp=tmp->next;
    }
    tmp=head;
    while(tmp){
        int i=s.top();
        s.pop();
        if(i!=tmp->val){
            return 0;
        }
        tmp=tmp->next;
    }
    return 1;
}
