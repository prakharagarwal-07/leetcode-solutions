class Solution {
public:
    bool checkString(string s) {

        bool Bfound = false;

        for( int i = 0 ; i < s.size() ; i++ ){

            if( s[i] == 'b' ){

                Bfound = true;

            }

            if( Bfound && s[i] == 'a' ){

                return false;
            }
        }

        return true;
        
    }
};