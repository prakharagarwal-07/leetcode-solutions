class Solution {
public:
    int integerReplacement(long long n) {

        long long count = 0;

        while( n != 1 ){

            count++;

            if( n % 2 == 0 ){

                n = n/2;
            }

            else if( n % 4 == 1 || n == 3 ){

                n = n - 1;

            }

            else if( n % 4 == 3 ){

                n = n + 1;
            }
        }

        return count;


        
    }
};