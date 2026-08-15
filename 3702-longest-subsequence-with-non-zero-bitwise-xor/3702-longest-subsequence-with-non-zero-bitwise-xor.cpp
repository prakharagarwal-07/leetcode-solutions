class Solution {
public:
    int longestSubsequence(vector<int>& nums) {

        int currXor = 0;
        int i;
        int count = 0;
        

        for( i = 0 ; i < nums.size() ; i++ ){

            if( nums[i] == 0 ){

                count++;
            }

            currXor = currXor^nums[i];

        }

        if( currXor != 0 ){

            return nums.size();

        }

        else if( currXor == 0 && count != nums.size() ){

            return nums.size()-1;
        }

        else{

            return 0;
        }
        
    }
};