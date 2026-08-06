class Solution {
public:

    long long prodInt( int n ){

        long long prod = 1;

        for( n ; n > 0 ; n = n/10 ){

            int digit = n%10;

            prod *= digit;
        }

        return prod;
    }

    int smallestNumber(int n, int t) {

        while(true){

            if( prodInt(n) % t == 0 ){

                return n;


            }

            n++;
        }

        return n;
        
    }
};