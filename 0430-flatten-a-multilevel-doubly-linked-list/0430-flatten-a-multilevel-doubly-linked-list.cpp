/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:

    Node* list( Node* head ){

    Node* temp = head;
    Node* left = head;
    Node* nextHead;

        while( temp != NULL ){


            if( temp->child != NULL ){

                nextHead = temp->next;

                temp->next = temp->child;

                Node* tail = list( temp->child );

                temp->child->prev = temp;

                tail->next = nextHead;

                if( nextHead != NULL ){

                    nextHead->prev = tail;

                }

                

                temp->child = NULL;


            }

            left = temp;
            temp = temp->next;

            

        }

        return left;




        

    }


    Node* flatten(Node* head) { 

        list(head);

        return head;

       
        
    }
};