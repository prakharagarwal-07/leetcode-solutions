class Solution {
public:
    string reverseParentheses(string s) {

        int number = 0;

        stack<int> portal;
        unordered_map<int , int> m;

        for( int i = 0 ; i < s.size() ; i++ ){

            if( s[i] == '(' ){

                portal.push(i);
                number++;


            }

            else if( s[i] == ')' ){

                m[portal.top()] = i;
                m[i] = portal.top();
                portal.pop();
                number++;

            }


        }

        int word = s.size() - number;

        string ans;
        int j = 0;
        int direction = 1;

        while( j >= 0 && j < s.size() ){

            if( s[j] == '(' || s[j] == ')' ){

                j = m[j];

                direction *= -1;

                j += direction;

            }

            else{

           

            ans.push_back(s[j]);

            j += direction;

            }

               
            


        }

        return ans;

        


        
    }
};