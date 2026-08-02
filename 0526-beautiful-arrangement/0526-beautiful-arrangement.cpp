class Solution {
public:

   

    void check( vector<int> &nums , int n , int &count , int idx ){

        if( idx == nums.size() ){

            count++;

           

            return;
        }

        for( int i = idx ; i < n ; i++ ){

            swap(nums[i] , nums[idx]);

            if( nums[idx] % (idx+1) == 0 || (idx+1) % nums[idx] == 0 ){
            check( nums , n , count , idx+1 );
            
            }

            swap(nums[i] , nums[idx]);


        }
    }
    int countArrangement(int n) {

        vector<int> nums;
        int idx = 0;


        for( int i = 0 ; i < n ; i++ ){

            nums.push_back(i+1);
        }

        int count = 0;

        check( nums , n , count , idx );

        return count;


        
    }
};