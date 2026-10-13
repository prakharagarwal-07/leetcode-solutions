class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

         int size = nums.size();


        long long int sum = 0;

        for( int k = 0 ; k < size ; k++ ){

            if( nums[k] < 0 ){

                nums[k] = (-1)*nums[k];
            }
        }

                sort( nums.begin() , nums.end() );


       

        for( int i = size-1 ; i >= size/2 ; i-- ){

            sum += 1LL*nums[i]*nums[i];
        }

        for( int j = size/2 - 1 ; j >= 0 ; j-- ){

            sum -= 1LL*nums[j]*nums[j];
        }

        return sum;


        
    }
};