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
    ListNode* reverseList(ListNode* head) {
        
        if(!head)
            return NULL;
        
        ListNode *before = NULL;
        ListNode *current = head;
        ListNode *after = head->next;

        while(after){
            
            current->next = before;
            before = current;
            current = after;
            after = after->next;
        }
        //最後一個current還指著null，要將它指回前一個
        current->next = before; 
        
        return current;
        
    }
};
