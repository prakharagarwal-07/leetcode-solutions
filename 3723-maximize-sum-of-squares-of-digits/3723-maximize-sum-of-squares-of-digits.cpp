class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        int nine = sum/9;

        string ans;

        if( nine >= num && sum-nine*9 > 0 ){

            return "";
        }

        int req = sum - nine*9;

        for( int i = 0 ; i < nine ; i++ ){

            ans += '9';
        }

        string s;

        if( req == 0 ){

            s = "";
        }

        else{

        s = to_string(req);

        }

        int zero;

        if( req != 0 ){

        zero = (num - nine - 1);

        }

        else{

            zero = (num -nine);
        }

        string last;

        for( int j = 0 ; j < zero ; j++ ){

            last += '0';




        }

        return ans + s + last;

      

        
    }
};