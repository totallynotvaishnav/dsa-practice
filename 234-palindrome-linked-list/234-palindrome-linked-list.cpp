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
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        return check(head,temp);
    }
    
    bool check(ListNode* head, ListNode*& temp){
        
        bool res;
        
        if(head == NULL){
            return true;
        }
       
        res=check(head->next, temp);
        if(!res){
            return false;
        }
        
        res= head->val==temp->val;  
        temp=temp->next;
       return res;
     
    }
};