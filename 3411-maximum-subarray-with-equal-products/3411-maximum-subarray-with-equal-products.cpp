class Solution {
public:

    int gcd( long long int a , long long int b ){

        while( b != 0 ){

            int temp = b;

            b = a % b;

            a = temp;
        }

        return a;
    }
    int maxLength(vector<int>& nums) {

        int length = 0;


        for( int i = 0 ; i < nums.size() ; i++ ){

            long long int currProd = nums[i];
            int GCD = nums[i];
            long long int LCM = nums[i];

            for( int j = i+1 ; j < nums.size() ; j++ ){

                currProd = 1LL * currProd * nums[j];

                GCD = gcd( GCD , nums[j]);
                LCM = lcm( LCM , nums[j]);

                if( currProd > GCD * LCM * 1LL ){

                    break;
                }

                if( GCD * LCM == currProd && j - i + 1 > length ){

                    length = j - i + 1 ;
                }
                


            }
        }

        return length;
        
    }
};