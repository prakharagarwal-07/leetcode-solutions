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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* temp = head;
        ListNode* dummy = new ListNode(-1);
        ListNode* prev = dummy;
        dummy->next = head;


        while( temp != NULL ){

            if( temp->next != NULL && temp->next->val == temp->val ){

                ListNode* dup = temp;

                while( temp->next != NULL && temp->next->val == temp->val ){

                    temp = temp->next;
                }

                ListNode* last = temp;

                prev->next = last->next;

                temp = temp->next;

                last->next = NULL;

                
            }

            else{

                prev = temp;

                temp = temp->next;

            }
        }

        return dummy->next;
        
    }
};