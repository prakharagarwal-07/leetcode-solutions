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

    bool valid( ListNode* start , int k ){

        ListNode* temp = start;
        int count = 0;

        while( temp != NULL ){

            count++;
            if( count == k ){

                return true;
            }
            temp = temp->next;
        }

        return false;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {


        ListNode* temp = head;
        ListNode* after;
        ListNode* prevTail = NULL;


        while( temp != NULL ){
            ListNode* start = temp;
            ListNode* newHead;
            int number = 1;
            ListNode* prev = NULL;



            if( valid( temp , k ) ){


                while( number <= k ){

                    after = temp->next;
                    temp->next = prev;

                    prev = temp;
                    temp = after;

                    number++;

                }

                if( prevTail == NULL ){

                    head = prev;
                }

                newHead = prev;

                if(prevTail != NULL){
                    prevTail->next = newHead;
                }
                prevTail = start;

            }



            else{

                break;

            }

            prevTail->next = temp;
        }

        return head;

     
        
    }
};