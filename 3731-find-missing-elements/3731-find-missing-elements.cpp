class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {


        sort( nums.begin() , nums.end() );

        int i = 0;
        int number = nums[0];
        vector<int> ans;

        while( i < nums.size() ){


            if( nums[i] == number ){

                i++;
                number++;

            }

            else{

                ans.push_back(number);

                number++;
            }




        }

        return ans;

        
        
    }
};