class Solution {
public:
    int maxDepth(string s) {

        int i;
        int size = s.size();
        int count = 0;
        int maxCount = 0;

        for( i = 0 ; i < size ; i++ ){

            if(s[i] == '(' ){

                count++;

                            maxCount = max( maxCount , count );

            }

            else if( s[i] == ')' ){

                count--;
            }

            else{

                continue;
            }
        }

        return maxCount;
        
    }
};