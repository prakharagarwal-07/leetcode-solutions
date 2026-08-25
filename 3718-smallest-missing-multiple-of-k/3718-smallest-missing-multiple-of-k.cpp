class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        sort( nums.begin() , nums.end() );

        int div = 0;
        int j = 1;

        for( int i = 0 ; i < nums.size() ; i++ ){

            if( nums[i]%k == 0 ){

                if( nums[i] / k == j ){

                    j++;

                    continue;
                }

                else if( nums[i] / k < j ){

                    continue;
                }

                else{

                    return j*k;
                }

                

                

            }
        }

        

       

        return j*k;
        
    }
};