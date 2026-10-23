class Solution {
public:
    int sortPermutation(vector<int>& nums) {

        int num = 0;
        

        bool isSorted = true;

        for( int j = 0 ; j < nums.size()-1 ; j++ ){

            if( nums[j] > nums[j+1] ){

                isSorted = false;
            }

        }

        if( isSorted ){

            return 0;
        }

        int ans = 0;

        for( int j = 0 ; j < nums.size() ; j++ ){

            if( nums[j] > nums[j+1] ){

                ans = nums[j];
                break;
            }
        }


        for( int i = 0 ; i < nums.size() ; i++ ){

            if( nums[i] != i ){

                ans = ans&nums[i];
            }



           
            
        }

        return ans;

       
    }
};