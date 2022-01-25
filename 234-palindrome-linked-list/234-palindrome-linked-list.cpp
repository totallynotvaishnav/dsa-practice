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

// approach 1: use a stack or vector
// approach 2: reverse the second half
// approach 3: two pointer using recursion

class Solution {
    
    bool check(ListNode*& head,ListNode* node){
        if(!node){
            return true;
        }
        bool isPal=check(head,node->next);
        if(head->val!=node->val){
            return false;
        }
        head=head->next;
        return isPal;
    }
public:
    bool isPalindrome(ListNode* head) {
     return check(head,head);
};
};