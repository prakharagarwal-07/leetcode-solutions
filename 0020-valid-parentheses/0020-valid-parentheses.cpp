class Solution {
public:
    bool isValid(string s) {

        

        stack<char> curr;

        for( char val: s ){

            if( val == '(' ){

                curr.push(val);
            }

            if( val == '{' ){

                curr.push(val);
            }

            if( val == '[' ){

                curr.push(val);
            }

            if( val == ')' || val == '}' || val == ']' ){

                if( curr.empty() ){

                    return false;
                }

                if( val == ')' ){

                    if(curr.top() == '('){

                        curr.pop();

                    }
                    else{
                        return false;
                    }

                }

                if( val == '}' ){

                    if(curr.top() == '{'){

                        curr.pop();

                    }

                    else{
                        return false;
                    }
                    
                }
                
                if( val == ']' ){

                    if(curr.top() == '['){

                        curr.pop();

                    }
                    else{
                        return false;
                    }
                    
                }
            }




        }

        if( !curr.empty() ){

            return false;
        }

        return true;
        
    }
};