class LRUCache {
public:


    class Node{
    public:
       
        int val;
        int key;
        Node* prev;
        Node* next;

        Node( int k , int v ){

            key = k;
            val = v;
            prev = next = NULL;

        }
        

    
    };

    Node* head = new Node( -1 , -1 );
    Node* tail = new Node( -1 , -1 );


    unordered_map< int , Node* > m;

    void deleteNode( Node* delNode ){

            Node* delPrev = delNode->prev;
            Node* delNext = delNode->next;

            delPrev->next = delNext;
            delNext->prev = delPrev;

           

    }

    int limit;


    LRUCache(int capacity) {

        limit = capacity;



    head->next = tail;
    tail->prev = head;
        
    }
    
    int get(int key) {

        if( m.find(key) == m.end() ){

            return -1;
        }

        Node* keyPrev = m[key]->prev;
        Node* keyNext = m[key]->next;


        keyPrev->next = keyNext;
        keyNext->prev = keyPrev;

        Node* headNext = head->next;
        

        head->next = m[key];
        m[key]->prev = head;

        m[key]->next = headNext;
        headNext->prev = m[key];


        return m[key]->val;
        
    }
    
    void put(int key, int value) {

        if( m.find(key) != m.end() ){

            Node* delNode = m[key];

            

            deleteNode( delNode  );

            m.erase(key);

            delete(delNode);
           

            
        }

        if( m.size() == limit ){

            

            Node* delNode = m[tail->prev->key];

             m.erase(tail->prev->key);

            deleteNode( delNode );


           

            delete(delNode);
            


        }

        Node* oldNext = head->next;
        Node* newNode = new Node( key , value );

        head->next = newNode;
        newNode->prev = head;

        newNode->next = oldNext;
        oldNext->prev = newNode;

        m[key] = newNode;

        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */