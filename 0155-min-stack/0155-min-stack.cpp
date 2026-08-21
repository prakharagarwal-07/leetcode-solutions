class MinStack {
public:

    int smallest = INT_MAX;
    vector<int> s;
    vector<int> minVals;

    MinStack() {

        
        
    }
    
    void push(int value) {

        if( value <= smallest ){

            if( smallest != INT_MAX ){

            minVals.push_back(smallest);

            }

            smallest = value;
        }

       

        s.push_back( value );
        
    }
    
    void pop() {


        if( s[s.size()-1] == smallest ){

        if( minVals.size() != 0 ){

            smallest = minVals[minVals.size()-1];

            minVals.pop_back();

        }
        else{

            smallest = INT_MAX;
        }

        }


        s.pop_back();

        
    }
    
    int top() {

        return s[s.size()-1];
        
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