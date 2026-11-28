class Solution {
public:
    bool canAliceWin(int n) {

        int remove = 10;
        bool Alice = true;

        while( n > 0 ){

            if( n < remove ){

                return !Alice;
            }

            n -= remove;
            remove--;

            if( n == 0 ){

                return Alice;
            }

            


            Alice = !Alice;

        }

        return Alice;
        
    }
};