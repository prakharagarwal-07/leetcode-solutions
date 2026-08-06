/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:


    Node* copyRandomList(Node* head) {

        if( head == NULL ){

            return NULL;
        }


        unordered_map<Node* , Node*> ref;

        Node* oldNode = head;
        Node* newHead = new Node(head->val);
        Node* temp = newHead;
        ref[oldNode] = newHead;

        oldNode = oldNode->next;


        while( oldNode != NULL ){

            Node* newNode = new Node(oldNode->val);
            temp->next = newNode;

            temp = temp->next;

            ref[oldNode] = newNode;

            oldNode = oldNode->next;

            
            
        }

        Node* oldRandom = head;
        Node* newRandom = newHead;

        while( oldRandom != NULL ){

            newRandom->random = ref[oldRandom->random];
            oldRandom = oldRandom->next;
            newRandom = newRandom->next;
        }

        return newHead;
        
    }
};