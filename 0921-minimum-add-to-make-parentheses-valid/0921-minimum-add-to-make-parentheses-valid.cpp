class Solution {
public:
    int minAddToMakeValid(string s) {

        stack<int> para;

        int count = 0;

        for( int i = 0 ; i < s.size() ; i++ ){

            if( s[i] == '(' ){

                para.push(s[i]);

            }

            else{

                if( para.empty() ){

                    count++;

                }

                else{

                    para.pop();

                }
            }
        }

        count += para.size();

        return count;
        
    }
};