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
    ListNode* rotateRight(ListNode* head, int k) {


         if( head == NULL ){

            return NULL;

        }

        if( head->next == NULL ){

            return head;
        }


        ListNode* len = head;
        int n = 0;

        while( len != NULL ){

            n++;
            len = len->next;


        }

        k = k%n;

       
       

        ListNode* temp = head;

        for( int i = 0 ; i < k ; i++ ){

            while( temp->next->next != NULL ){


                temp = temp->next;

            }

            ListNode* last = temp;
            temp = temp->next;
            last->next = NULL;


            temp->next = head;
            head = temp;
        }

        return head;
        
    }
};