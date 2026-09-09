class Solution {
public:
    int countRotations(string s, int k) {

        int rot = 0;
        int n = s.size();
        int count = 0;

        while( rot < n ){

            rotate( s.begin() , s.begin()+1 , s.end() );

            rot++;

            int currCount = 0;

            for( int i = 0 ; i < n-1 ; i++ ){

                

                if( s[i] == s[i+1] ){

                    currCount++;

                    
                    
                }
            }

            if( currCount == k ){

                count++;
            }

            
        }

        return count;

        
        
    }
};