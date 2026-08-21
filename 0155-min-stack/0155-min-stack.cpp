class MinStack {
public:

    long long int smallest = INT_MAX;
    stack<long long int> s;
   
    int val2 = 0;

    MinStack() {

        
        
    }
    
    void push(int value) {

        if(s.empty()){

            s.push(value);
            smallest = value;
        }

        else if( value <= smallest ){

            s.push(  2LL*value - smallest );
            smallest = value;
        }

        else{

            s.push(value);
        }

       


        
    }
    
    void pop() {

        if( s.top() <= smallest ){

            smallest = 2LL*smallest - s.top();

        }

        s.pop();


      
        }

    
    
    int top() {

       if( s.top() <= smallest ){

        return smallest;
       }

       return s.top();        
    }
    
    int getMin() {

        return smallest;

    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */