class Solution {
public:

    int sumDig( int x ){

        int sum = 0;


        while( x > 0 ){

            sum = sum + x%10;
            x = x/10;


        }

        return sum;


    }


    int smallestIndex(vector<int>& nums) {

        for( int i = 0 ; i < nums.size() ; i++ ){

            if( sumDig( nums[i] ) == i ){

                return i;
            }
        }

        return -1;
        
    }
};