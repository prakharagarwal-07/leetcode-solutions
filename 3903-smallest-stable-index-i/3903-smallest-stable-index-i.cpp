class Solution {
public:
    int firstStableIndex(vector<int>& nums, int m) {

        int size = nums.size();

        vector<int> prefix( size , 0 );

        prefix[0] = nums[0];

        for( int i = 1 ; i < size ; i++ ){

            prefix[i] = max(prefix[i-1] , nums[i]);

        }

        vector<int> suffix( size , 0 );

        suffix[size-1] = nums[size-1];

        for( int j = size-2 ; j >= 0 ; j-- ){

            suffix[j] = min( suffix[j+1] , nums[j] );

        }

        int minIndex = 0;
        int minStab = INT_MAX;

        for( int k = 0 ; k < size ; k++ ){

            int stability = prefix[k] - suffix[k];

            if( stability <= m ){

                return k;



        }

        }

        

            return -1;
     
        
    }
};