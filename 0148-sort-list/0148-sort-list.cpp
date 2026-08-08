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

    ListNode* merge( ListNode* left , ListNode* right ){

        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;


        while( left != NULL && right != NULL ){

            if( left->val <= right->val ){


                tail->next = left;
                tail = left;
                left = left->next;



            }

            else{

                tail->next = right;
                tail = right;
                right = right->next;
            }




        }

        if( right != NULL ){

            tail->next = right;
            

        }

        if( left != NULL ){

            tail->next = left;
            
        }

        return dummy->next;




    }

    ListNode* mergeSort( ListNode* head ){

                


        if( head == NULL || head->next == NULL ){

            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head->next;

        while( fast != NULL && fast->next != NULL ){

            slow = slow->next;
            fast = fast->next->next;

        }

        ListNode* right = slow->next;
        slow->next = NULL;

       
        ListNode* left = mergeSort( head );

        right = mergeSort( right );

        return merge( left , right );




    }


    ListNode* sortList(ListNode* head) {

        return mergeSort( head );

        
        
    }
};