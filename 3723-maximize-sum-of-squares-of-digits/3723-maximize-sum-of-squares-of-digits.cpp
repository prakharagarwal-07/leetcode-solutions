class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

       
        string ans;

        if( sum > 9*num ){

            return "";
        }

        while( num > 0 ){

            int digit = min( 9 , sum );
            ans += char('0' + digit);
            sum -= digit;
            num--;
        }

        return ans;

       

        
    }
};