class Solution {
public:
    int longestValidParentheses(string s) {

        stack<int> para;
        para.push(-1);

        int len = 0;

        for( int i = 0 ; i < s.size() ; i++ ){

            if( s[i] == '(' ){

                para.push(i);
            }

            else{

                para.pop();

                if( para.empty() ){

                    para.push(i);
                }

                else{

                    len = max( len , i - para.top() );
                }
            }
        }

        return len;
        
    }
};