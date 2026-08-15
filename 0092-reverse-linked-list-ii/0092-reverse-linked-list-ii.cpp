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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        if( head == NULL || head->next == NULL ){

            return head;
        }

        ListNode* temp = dummy;

        int i = 0;

        while( i < left-1 ){

            temp = temp->next;
            i++;


        }

        ListNode* revHead = temp->next;

        

        ListNode* curr = temp->next;
        ListNode* prev = temp;
        ListNode* next;

        int j = 0;

        while( j < right - left + 1 && curr != NULL ){

            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;

            j++;


        } 

       

        revHead->next = curr;
        temp->next = prev;


        




        if( left == 1 ){

            return prev;
        }

        return head;
        
        

        
        
    }
};