class Solution {
public:
    bool checkDivisibility(int n) {

        int num = n;

        long long int sum = 0;
        long long int prod = 1;

        while( num >= 1 ){

            int digit = num%10;

            sum += digit;
            prod *= digit;

            num = num/10;
        }

        long long div = sum + prod;

        if( n%div == 0 ){

            return true;
        }

        return false;
        
    }
};