class Solution {
public:

    long long GCD( int a , int b ){

        while( a > 0 && b > 0 ){

            if(a > b){
                a = a%b;
            }

            else{

                b = b%a;
            }
        }

        if( a > b ){

            return a;
        }

        return b;
    }
    long long maxPairStrength(vector<int>& nums) {

        long long max = INT_MIN;

        for( int i = 0 ; i < nums.size() ; i++ ){

            for( int j = i  ; j < nums.size() ; j++ ){

                long long gcd = GCD( nums[i] , nums[j] );

                if( 1LL*nums[i]*nums[j]/(1LL*gcd*gcd) > max ){

                    max = 1LL*nums[i]*nums[j]/(1LL*gcd*gcd);
                }




            } 
        }

        return max;


        
    }
};