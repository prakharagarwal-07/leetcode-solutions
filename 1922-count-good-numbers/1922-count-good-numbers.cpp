class Solution {
public:

    long long int pow( long long a , long long b , long long ans , long long mod ){

        if( b <= 0 ){

            return ans;
        }

        if( b % 2 == 1 ){

            ans = (ans * a)%mod;
        }

        return pow( (1LL*a*a)%mod , b/2 , ans , mod ); 





    }


    int countGoodNumbers(long long n) {

        long long int prime = n/2;
        long long int even = n - prime;
        long long int ans = 1;

        long long int mod = 1000000007;

        return (pow( 5 , even , ans , mod )*pow( 4 , prime , ans , mod ))%mod;

        

        
        
    }
};


